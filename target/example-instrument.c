#include<stdio.h>
//example.c
int static_var = 1;

int f1(int a) {
	_varCheck_();_varCheck_();static_var++;
	//if-else
	if( /*binOp start*/a == /*binOp end*/1) {
		return 2;
	} else {
		return 4;
	}
}

int main() {
	int a = 0;		
	int *bb;
	int arr[100] = {0};

	f1(a);
	
	//if-else if-else
	if( /*binOp start*/a == /*binOp end*/1) {
		/*compound start*//*binOp start*/a =  /*compound end*//*binOp end*/2;
	} else if ( /*binOp start*/a == /*binOp end*/2){
		/*compound start*//*binOp start*/a = /*compound end*//*binOp end*/1;
	} else {
		/*compound start*//*binOp start*/a = /*compound end*//*binOp end*/4;
		/*compound start*//*binOp start*/arr[a] = /*compound end*//*binOp end*/20;
	}
	
	/*compound start*//*binOp start*/arr[99] = /*compound end*//*binOp end*/30;
//	printf("%d",arr[140]);

	//for	
	for( int i = 0 ; /*binOp start*/i < /*binOp end*/10 ; i++ ) {
		/*assign start*//*binOp start*/a += /*assign end*//*binOp end*/i;
	}
	for(int i=0;/*binOp start*/i</*binOp end*/10;i++){
		/*compound start*//*binOp start*/a = /*binOp start*/a+/*compound end*//*binOp end*//*binOp end*/i;
	}
	
	//while
	while( /*binOp start*/a < /*binOp end*/100 ) {
		/*assign start*//*binOp start*/a += /*assign end*//*binOp end*/a;
	}
	
	//do-while
	do {
		switch(a) {
			case 100: 
				/*case assign start*//*binOp start*/a += /*binOp end*/10;
				break;
			case 200: 
				/*case comp start*//*binOp start*/a = /*binOp start*/a == /*binOp end*/3 ? 1 : /*case comp end*//*binOp end*/2;// ?: operator 
				/*assign start*//*binOp start*/a += /*assign end*//*binOp end*/20;
				break;
			default:
				/*case assign start*//*binOp start*/a += /*binOp end*/1;
		}
	} while( /*binOp start*/a == /*binOp end*/0 );

	switch(a) {
		case 150:
			/*case assign start*//*binOp start*/a+=/*binOp end*/20;
			break;
		case 250:
			/*case comp start*//*binOp start*/a=/*binOp start*/a+/*case comp end*//*binOp end*//*binOp end*/30;
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

