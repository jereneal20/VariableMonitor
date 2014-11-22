#include <cstdio>
#include <string>
#include <iostream>
#include <sstream>
#include <map>
#include <utility>
#include <fstream>

#include "clang/AST/ASTConsumer.h"
#include "clang/AST/RecursiveASTVisitor.h"
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
//	printf("Test %d\n",lineNum);
	d->dumpColor();
	if(isa<VarDecl>(d)){
		VarDecl *varDe = cast<VarDecl>(d);
		
		m_rewriter->InsertTextAfter(varDe->getLocStart(),"/*loc start on VarDecl*/");
		m_rewriter->InsertTextAfter(varDe->getLocEnd(),"/*loc end on VarDecl*/");
		cout<<varDe->getQualifiedNameAsString();
		QualType tp = varDe->getType();
		cout<<" @ "<<tp.getAsString();
		//cout<<" @ "<<varDe->getDeclName().getAsString();
		printf(" VarDecl : %s lineNum: %d\n",d->getDeclKindName(),lineNum);
	}
	return true;
    }

    bool VisitStmt(Stmt *s) {
	SourceLocation startLocation = s->getLocStart();
	SourceManager &srcmgr = *m_srcMgr;
	unsigned int lineNum = srcmgr.getExpansionLineNumber(startLocation);
	unsigned int colNum = srcmgr.getExpansionColumnNumber(startLocation);
	
	string insertSent = "/*loc stmt start*/";
//	printf("%s\n",s->getStmtClassName());
	if(isa<IntegerLiteral>(s)){
		IntegerLiteral *intLit = cast<IntegerLiteral>(s);
		QualType tp = intLit->getType();

		m_rewriter->InsertTextAfter(intLit->getLocStart(),insertSent);
		m_rewriter->InsertTextAfter(intLit->getLocEnd(),"/*loc stmt end*/");
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
    
    // Create an AST consumer instance which is going to get called by ParseAST.
    MyASTConsumer TheConsumer;

    // Parse the file to AST, registering our consumer as the AST consumer.
    ParseAST(TheCompInst.getPreprocessor(), &TheConsumer, TheCompInst.getASTContext());

    const RewriteBuffer *RewriteBuf = TheRewriter.getRewriteBufferFor(SourceMgr.getMainFileID());
    
    string fileNameInstru = string(argv[1]);
    fileNameInstru.replace(fileNameInstru.end()-2,fileNameInstru.end(),"-instrument.c");
    ofstream output(fileNameInstru.c_str(),ofstream::out);
    output << string(RewriteBuf->begin(),RewriteBuf->end());
    output.close();


    return 0;
}
