#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//enum TypeName{
//INT, INTPTR, CHAR, CHARPTR,ETC};
enum VarType{
Var,ParmVar};

int varMonitNum;
typedef struct VarMonitor{
	int varibleID;
	size_t varAddr;
	int declLineNum;
	char variableName[200];
	char typeName[60];
	char arrSize[50];
	int arrSpace;
	enum VarType varType;
	int referVarID;
	int refAddress;
}VarMonitor;

VarMonitor varMonit[5000];
int mallocAddrChecker;

extern void _monitor_init(char* fileNameArr){
	int fileLength;	
	char instruName[100] = "-varData";
	char inputFileName[100];
	varMonitNum = 0;
	mallocAddrChecker = -1;
	for(int i=0;i<100;i++){
		if(fileNameArr[i]=='\0'){
			fileLength = i;
			break;
		}
	}
	for(int i=0;i<fileLength-2;i++){
		inputFileName[i] = fileNameArr[i];
	}
	for(int i=fileLength-2;i<fileLength+8;i++){
		inputFileName[i] = instruName[i-fileLength+2];
	}
	FILE* varData = fopen(inputFileName, "rt");

	int varNum = 0;
	while(1){
	    int ret;
	    for(int i=0;i<180;i++){
	        ret = fscanf(varData,"%c",&varMonit[varNum].variableName[i]);
	        if(varMonit[varNum].variableName[i]=='@'){
	    	    varMonit[varNum].variableName[i]='\0';
		    break;
		}
	    }
	    if(ret==EOF)break;
	    
	    for(int i=0;i<60;i++){
	        ret = fscanf(varData,"%c",&varMonit[varNum].typeName[i]);
	        if(varMonit[varNum].typeName[i]=='@'){
	    	    varMonit[varNum].typeName[i]='\0';
		    break;
		}
	    }
	    if(varMonit[varNum].typeName[4]=='['){
		int iter = 5;
		for(;varMonit[varNum].typeName[iter]!=']';iter++){
		    varMonit[varNum].arrSize[iter-5] = varMonit[varNum].typeName[iter];
		}
		varMonit[varNum].arrSize[iter] ='\0';
		varMonit[varNum].arrSpace = atoi(varMonit[varNum].arrSize)*4;
		//printf("%d : arrspace \n",varMonit[varNum].arrSpace);
	    }


	    int tmp;
	    ret = fscanf(varData,"%d",&tmp);
	    if(tmp==1){
		varMonit[varNum].varType = ParmVar;
	    }else{
		varMonit[varNum].varType = Var;
	    }
	    ret = fscanf(varData,"%d",&varMonit[varNum].declLineNum);
	    char charTmp;
	    fscanf(varData,"%c",&charTmp);
	    varNum++;
	}
	varMonitNum = varNum;
	//printf("Init Monitor %s!\n",inputFileName);
}



extern void _varCheck_(int lineNum, size_t varAddress,size_t isAddr, char* varName){
	char varOriginName[100] = {0};
//	printf("%s lineNum : %d",varName,lineNum);
	if(isAddr==1){//pointer
//		printf(" addr : %zu\n",varAddress);
	}else if(isAddr>1){//array
		for(int i=1;varName[i]!='[';i++){
		    varOriginName[i-1] = varName[i];
		}
		for(int i=varMonitNum;i>=0;i--){
		    int res = strcmp(varMonit[i].variableName,varOriginName);
		    if(res==0){
//			printf(" Find Var!!");
			varMonit[i].varAddr = isAddr;
			break;
		    }
		}
//		printf(" addr : %zu, %s originAddr %zu\n",varAddress,varOriginName,isAddr);
	}else{
//		printf("\n");
		return;
	}
	
	
	size_t min=240733765965600;
	int mini=-1;
	for(int i=varMonitNum;i>=0;i--){
//	    printf("%zu~ ",varMonit[i].varAddr);
	    if(varMonit[i].varAddr<=varAddress
	    &&varMonit[i].varAddr!=0){
		if(varMonit[i].varAddr<min){
		    min = varMonit[i].varAddr;
		    mini = i;
		}
	    }
	}
//	printf("@%d %zu, %zu@",mini,varMonit[mini].varAddr+varMonit[mini].arrSpace,varAddress);
	if(mini!=-1&&varMonit[mini].varAddr+varMonit[mini].arrSpace<varAddress){
	    //printf("Index bound: %zu, Pointer's Index : %zu",varMonit[mini].varAddr+varMonit[mini].arrSpace,varAddress);
	    printf("Pointer reference bound Error on line %d\n",lineNum);
	    assert(0);
	}
}

extern size_t _mallocCheck_(int lineNum,char* varName,size_t varAddr, size_t size){
	for(int i=varMonitNum;i>=0;i--){
	    int res = strcmp(varMonit[i].variableName,varName);
	    if(res==0){
//		printf("Find var! ");
		mallocAddrChecker = i;
		//varMonit[i].varAddr = varAddr;
		varMonit[i].arrSpace = size;
	    }
	}
//	printf("Mal lineNum : %d size: %zu %s\n",lineNum,size, varName);
	return size;
}
extern void _afterMalloc_(size_t varAddr){
	varMonit[mallocAddrChecker].varAddr = varAddr;
	mallocAddrChecker = -1;
}
