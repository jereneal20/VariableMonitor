//example.c
/*loc start on VarDecl*/int static_var = /*loc end on VarDecl*//*loc stmt start*//*loc stmt end*/1;

int f1(/*loc start on VarDecl*/int /*loc end on VarDecl*/a) {
	static_var++;
	//if-else
	if( a == /*loc stmt start*//*loc stmt end*/1) {
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
	_idxCheck_();	
	//if-else if-else
	if( a == /*loc stmt start*//*loc stmt end*/1) {
		a =  /*loc stmt start*//*loc stmt end*/2;
	} else if ( a == /*loc stmt start*//*loc stmt end*/2){
		a = /*loc stmt start*//*loc stmt end*/1;
	} else {
		a = /*loc stmt start*//*loc stmt end*/4;
	}	
	
	//for	
	for( /*loc start on VarDecl*/int i = /*loc end on VarDecl*//*loc stmt start*//*loc stmt end*/0 ; i < /*loc stmt start*//*loc stmt end*/10 ; i++ ) {
		a += i;
	}
	
	//while
	while( a < /*loc stmt start*//*loc stmt end*/100 ) {
		a += a;
	}
	
	//do-while
	do {
		switch(a) {
			case /*loc stmt start*//*loc stmt end*/100: 
				a += /*loc stmt start*//*loc stmt end*/10;
				break;
			case /*loc stmt start*//*loc stmt end*/200: 
				a = a == /*loc stmt start*//*loc stmt end*/3 ? /*loc stmt start*//*loc stmt end*/1 : /*loc stmt start*//*loc stmt end*/2;// ?: operator 
				a += /*loc stmt start*//*loc stmt end*/20;
				break;
			default:
				a += /*loc stmt start*//*loc stmt end*/1;
		}
	} while( a == /*loc stmt start*//*loc stmt end*/0 );

	switch(a) {
		case /*loc stmt start*//*loc stmt end*/150:
			a+=/*loc stmt start*//*loc stmt end*/20;
			break;
		case /*loc stmt start*//*loc stmt end*/250:
			a+=/*loc stmt start*//*loc stmt end*/30;
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

