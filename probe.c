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



extern int _varCheck_(){
	printf("E");
}
