#include<stdio.h>
//example.c
/*loc start on VarDecl*/int static_var = /*loc end on VarDecl*//*loc stmt start*//*loc stmt end*/1;

int f1(/*loc start on VarDecl*/int /*loc end on VarDecl*/a) {
	_idxCheck_();_idxCheck_();static_var++;
	//if-else
	if( /*binOp start*/a == /*binOp end*//*loc stmt start*//*loc stmt end*/1) {
		return /*loc stmt start*//*loc stmt end*/2;
	} else {
		return /*loc stmt start*//*loc stmt end*/4;
	}
}

int main() {
	/*loc start on VarDecl*/int a = /*loc end on VarDecl*//*loc stmt start*//*loc stmt end*/0;		
	/*loc start on VarDecl*/int */*loc end on VarDecl*/bb;
	/*loc start on VarDecl*/int arr[/*loc stmt start*//*loc stmt end*/100] = {/*loc stmt start*//*loc stmt end*/0/*loc end on VarDecl*/};

	f1(a);
	
	//if-else if-else
	if( /*binOp start*/a == /*binOp end*//*loc stmt start*//*loc stmt end*/1) {
		/*compound start*//*binOp start*/a =  /*compound end*//*binOp end*//*loc stmt start*//*loc stmt end*/2;
	} else if ( /*binOp start*/a == /*binOp end*//*loc stmt start*//*loc stmt end*/2){
		/*compound start*//*binOp start*/a = /*compound end*//*binOp end*//*loc stmt start*//*loc stmt end*/1;
	} else {
		/*compound start*//*binOp start*/a = /*compound end*//*binOp end*//*loc stmt start*//*loc stmt end*/4;
		/*compound start*//*binOp start*/arr[a] = /*compound end*//*binOp end*//*loc stmt start*//*loc stmt end*/20;
	}
	
	/*compound start*//*binOp start*/arr[/*loc stmt start*//*loc stmt end*/99] = /*compound end*//*binOp end*//*loc stmt start*//*loc stmt end*/30;
//	printf("%d",arr[140]);

	//for	
	for( /*loc start on VarDecl*/int i = /*loc end on VarDecl*//*loc stmt start*//*loc stmt end*/0 ; /*binOp start*/i < /*binOp end*//*loc stmt start*//*loc stmt end*/10 ; i++ ) {
		/*binOp start*/a += /*binOp end*/i;
	}
	
	//while
	while( /*binOp start*/a < /*binOp end*//*loc stmt start*//*loc stmt end*/100 ) {
		/*binOp start*/a += /*binOp end*/a;
	}
	
	//do-while
	do {
		switch(a) {
			case /*loc stmt start*//*loc stmt end*/100: 
				/*binOp start*/a += /*binOp end*//*loc stmt start*//*loc stmt end*/10;
				break;
			case /*loc stmt start*//*loc stmt end*/200: 
				/*binOp start*/a = /*binOp start*/a == /*binOp end*//*loc stmt start*//*loc stmt end*/3 ? /*loc stmt start*//*loc stmt end*/1 : /*binOp end*//*loc stmt start*//*loc stmt end*/2;// ?: operator 
				/*binOp start*/a += /*binOp end*//*loc stmt start*//*loc stmt end*/20;
				break;
			default:
				/*binOp start*/a += /*binOp end*//*loc stmt start*//*loc stmt end*/1;
		}
	} while( /*binOp start*/a == /*binOp end*//*loc stmt start*//*loc stmt end*/0 );

	switch(a) {
		case /*loc stmt start*//*loc stmt end*/150:
			/*binOp start*/a+=/*binOp end*//*loc stmt start*//*loc stmt end*/20;
			break;
		case /*loc stmt start*//*loc stmt end*/250:
			/*binOp start*/a+=/*binOp end*//*loc stmt start*//*loc stmt end*/30;
			break;
	}
}

/*
moonzoo@verifier3:~/kcov/branch-identify$ PrintBranches example.c
function: f1
        If      ID: 0           Line:  7                Col: 2
function: main
        If      ID: 1           Line:  18               Col: 2
        If      ID: 2           Line:  20               Col: 9
        For     ID: 3           Line:  27               Col: 2
        While   ID: 4           Line:  32               Col: 2
        Do      ID: 5           Line:  37               Col: 2
        Case    ID: 6           Line:  39               Col: 4
        Case    ID: 7           Line:  42               Col: 4
        ?:      ID: 8           Line:  43               Col: 9
        Default ID: 9           Line:  46               Col: 4
        ImpDef. ID: 10          Line:  51               Col: 2
        Case    ID: 11          Line:  52               Col: 3
        Case    ID: 12          Line:  55               Col: 3
Total number of branches: 20
*/

