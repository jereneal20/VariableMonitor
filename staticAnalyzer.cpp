#include <cstdio>
#include <string>
#include <iostream>
#include <sstream>
#include <map>
#include <utility>
#include <fstream>

#include "clang/AST/ASTConsumer.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/ParentMap.h"
#include "clang/Basic/Diagnostic.h"
#include "clang/Basic/FileManager.h"
#include "clang/Basic/SourceManager.h"
#include "clang/Basic/TargetOptions.h"
#include "clang/Basic/TargetInfo.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Lex/Preprocessor.h"
#include "clang/Parse/ParseAST.h"
#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/Rewrite/Frontend/Rewriters.h"
#include "llvm/Support/Host.h"
#include "llvm/Support/raw_ostream.h"

using namespace clang;
using namespace std;

SourceManager *m_srcMgr = NULL;
Rewriter *m_rewriter = NULL;
ASTContext *astcontext = NULL;
ofstream *varOutput = NULL;

class MyASTVisitor : public RecursiveASTVisitor<MyASTVisitor>
{
public:

    bool VisitDecl(Decl *d){
	SourceLocation startLocation = d->getLocStart();
	SourceManager &srcmgr = *m_srcMgr;
	unsigned int lineNum = srcmgr.getExpansionLineNumber(startLocation);
	unsigned int colNum = srcmgr.getExpansionColumnNumber(startLocation);
//	char * kindName = d->getDeclKindName();
	DeclContext* cont = d->getDeclContext();
	d->dumpColor();
	if(isa<VarDecl>(d)){
		VarDecl *varDe = cast<VarDecl>(d);
		
		//m_rewriter->InsertTextAfter(varDe->getLocStart(),"/*loc start VarDecl*/");
		//m_rewriter->InsertTextAfter(varDe->getLocEnd(),"/*loc end VarDecl*/");
		QualType tp = varDe->getType();
		cout<<varDe->getQualifiedNameAsString()<<" @ "<<tp.getAsString();
		printf(" @ %s lineNum: %d\n",d->getDeclKindName(),lineNum);
	}
	return true;
    }

    bool VisitStmt(Stmt *s) {
	SourceLocation startLocation = s->getLocStart();
	SourceManager &srcmgr = *m_srcMgr;
	unsigned int lineNum = srcmgr.getExpansionLineNumber(startLocation);
	unsigned int colNum = srcmgr.getExpansionColumnNumber(startLocation);
	
	if(lineNum==6){
		m_rewriter->InsertTextAfter(startLocation,"_varCheck_();");
	}	
	string insertSent = "/*loc stmt start*/";
//	printf("%s\n",s->getStmtClassName());
	
	if(isa<CompoundStmt>(s)){
		CompoundStmt *cmdSt = cast<CompoundStmt>(s);
		printf("TT %d %d\n",lineNum,colNum);
		for(StmtIterator b = cmdSt->child_begin();b!=cmdSt->child_end();b++){
			if(!strcmp("BinaryOperator",b->getStmtClassName())){
				printf("Binary Op!\n");
				m_rewriter->InsertTextAfter(b->getLocStart(),"/*compound start*/");
				m_rewriter->InsertTextAfter(b->getLocEnd(),"/*compound end*/");
			}
			if(!strcmp("CompoundAssignOperator",b->getStmtClassName())){
				printf("Compound Assign Op!\n");
				m_rewriter->InsertTextAfter(b->getLocStart(),"/*assign start*/");
				m_rewriter->InsertTextAfter(b->getLocEnd(),"/*assign end*/");
			}
		
		}
	}

	if(isa<CaseStmt>(s)||isa<DefaultStmt>(s)){ //isa<DefaultStmt>(s)
		//CaseStmt *caseSt = cast<CaseStmt>(s);
		printf("TR %d %d\n",lineNum,colNum);
		for(StmtIterator b = s->child_begin();b!=s->child_end();b++){
			if(*b==NULL){
				printf("NULL!\n");
				continue;
			}
			if(!strcmp("BinaryOperator",b->getStmtClassName())){
				printf("Binary Ca Op!\n");
				m_rewriter->InsertTextAfter(b->getLocStart(),"/*case comp start*/");
				m_rewriter->InsertTextAfter(b->getLocEnd(),"/*case comp end*/");
			}
			if(!strcmp("CompoundAssignOperator",b->getStmtClassName())){
				printf("Compound Ca Assign Op!\n");
				m_rewriter->InsertTextAfter(b->getLocStart(),"/*case assign start*/");
				//m_rewriter->InsertTextAfter(b->getLocEnd(),"/*case assign end*/");
			}
		
		}
	}

	if(isa<BinaryOperator>(s)){
		BinaryOperator *cmdSt = cast<BinaryOperator>(s);
		m_rewriter->InsertTextAfter(cmdSt->getLocStart(),"/*binOp start*/");
		m_rewriter->InsertTextAfter(cmdSt->getLocEnd(),"/*binOp end*/");
	}
	
	if(isa<IntegerLiteral>(s)){
		IntegerLiteral *intLit = cast<IntegerLiteral>(s);
		QualType tp = intLit->getType();

		//m_rewriter->InsertTextAfter(intLit->getLocStart(),insertSent);
		//m_rewriter->InsertTextAfter(intLit->getLocEnd(),"/*loc stmt end*/");
		//cout<<"@ "<<tp.getAsString();	
		//printf("%d",intLit->getType());//->getAsString()<<endl;
		//printf("IntegerLiteral %d\n",lineNum);
	}
	
	if(isa<DeclStmt>(s)){
		//s->viewAST();
		//printf("DeclStmt : %d\n", lineNum);
	}

	return true;
    }
    
    bool VisitFunctionDecl(FunctionDecl *f) {
        string funcName = f->getNameInfo().getAsString();
	cout<<"function: " <<f->getName().str() <<endl;
	return true;
    }

};

class MyASTConsumer : public ASTConsumer
{
public:
    MyASTConsumer()
        : Visitor() //initialize MyASTVisitor
    {}

    virtual bool HandleTopLevelDecl(DeclGroupRef DR) {
        for (DeclGroupRef::iterator b = DR.begin(), e = DR.end(); b != e; ++b) {
            // Travel each function declaration using MyASTVisitor
            Visitor.TraverseDecl(*b);
        }
        return true;
    }

private:
    MyASTVisitor Visitor;
};


int main(int argc, char *argv[])
{
    if (argc != 2) {
        llvm::errs() << "Usage: kcov-branch-identify <filename>\n";
        return 1;
    }

    // CompilerInstance will hold the instance of the Clang compiler for us,
    // managing the various objects needed to run the compiler.
    CompilerInstance TheCompInst;
    
    // Diagnostics manage problems and issues in compile 
    TheCompInst.createDiagnostics(NULL, false);

    // Set target platform options 
    // Initialize target info with the default triple for our platform.
    TargetOptions *TO = new TargetOptions();
    TO->Triple = llvm::sys::getDefaultTargetTriple();
    TargetInfo *TI = TargetInfo::CreateTargetInfo(TheCompInst.getDiagnostics(), TO);
    TheCompInst.setTarget(TI);

    // FileManager supports for file system lookup, file system caching, and directory search management.
    TheCompInst.createFileManager();
    FileManager &FileMgr = TheCompInst.getFileManager();
    
    // SourceManager handles loading and caching of source files into memory.
    TheCompInst.createSourceManager(FileMgr);
    SourceManager &SourceMgr = TheCompInst.getSourceManager();
    m_srcMgr = &SourceMgr;
    
    // Prreprocessor runs within a single source file
    TheCompInst.createPreprocessor();
    
    // ASTContext holds long-lived AST nodes (such as types and decls) .
    TheCompInst.createASTContext();

    // A Rewriter helps us manage the code rewriting task.
    Rewriter TheRewriter;
    TheRewriter.setSourceMgr(SourceMgr, TheCompInst.getLangOpts());
    m_rewriter = &TheRewriter;

    // Set the main file handled by the source manager to the input file.
    const FileEntry *FileIn = FileMgr.getFile(argv[1]);
    SourceMgr.createMainFileID(FileIn);
    
    // Inform Diagnostics that processing of a source file is beginning. 
    TheCompInst.getDiagnosticClient().BeginSourceFile(TheCompInst.getLangOpts(),&TheCompInst.getPreprocessor());
   
    string varSaveFileName = string(argv[1]);
    varSaveFileName.replace(varSaveFileName.end()-2,varSaveFileName.end(),"-varData");
    ofstream varDataOut(varSaveFileName.c_str(),ofstream::out);
    varOutput = &varDataOut;

 
    // Create an AST consumer instance which is going to get called by ParseAST.
    MyASTConsumer TheConsumer;

    // Parse the file to AST, registering our consumer as the AST consumer.
    ParseAST(TheCompInst.getPreprocessor(), &TheConsumer, TheCompInst.getASTContext());
    astcontext = &TheCompInst.getASTContext();


    const RewriteBuffer *RewriteBuf = TheRewriter.getRewriteBufferFor(SourceMgr.getMainFileID());
    
    string fileNameInstru = string(argv[1]);
    fileNameInstru.replace(fileNameInstru.end()-2,fileNameInstru.end(),"-instrument.c");
    ofstream output(fileNameInstru.c_str(),ofstream::out);
    output << string(RewriteBuf->begin(),RewriteBuf->end());
    output.close();


    return 0;
}
