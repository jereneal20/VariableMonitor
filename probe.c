#include <stdio.h>
#include <stdlib.h>
//enum TypeName{
//INT, INTPTR, CHAR, CHARPTR,ETC};
enum VarType{
Var,ParmVar};


typedef struct VarMonitor{
	int varibleID;
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

extern void _monitor_init(char* fileNameArr){
	int fileLength;
	char instruName[100] = "-varData";
	char inputFileName[100];
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
		varMonit[varNum].arrSpace = atoi(varMonit[varNum].arrSize);	
		printf("%d All k \n",varMonit[varNum].arrSpace);
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

	//printf("Init Monitor %s!\n",inputFileName);
}

extern void _varCheck_(int lineNum, size_t varAddress,int isAddr){

	printf("lineNum : %d",lineNum);
	if(isAddr){
		printf(" addr : %zu\n",varAddress);
	}else{
		printf("\n");
	}
}

extern size_t _mallocCheck_(size_t size){
	return size;
}
