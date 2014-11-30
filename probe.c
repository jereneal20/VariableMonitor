#include <stdio.h>
#include <stdlib.h>
enum TypeName{
INT, INTPTR, CHAR, CHARPTR,ETC};

typedef struct VarMonitor{
	int varibleID;
	int declLineNum;
	char variableName[200];
	enum TypeName typeName;
	int referVarID;
	int refAddress;
}VarMonitor;

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

	printf("Init Monitor %s!\n",inputFileName);
}

extern void _varCheck_(){
//	printf("E");
}

extern size_t _mallocCheck_(size_t size){
	return size;
}
