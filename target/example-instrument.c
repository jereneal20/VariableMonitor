#include<stdio.h>
//example.c
int static_var = 1;

int f1(int a) {
	static_var++;
	//if-else
	if( a == 1) {
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
	if( a == 1) {
		/*compound start*/a =  2;/*end of stmt*/
	} else if ( a == 2)
		/*compound start*/a = 1;/*end of stmt*/
	 else {
		/*compound start*/a = 4;/*end of stmt*/
		/*compound start*/arr[a] = 20;/*end of stmt*/
	}
	
	/*compound start*/arr[99] = 30;/*end of stmt*/
//	printf("%d",arr[140]);

	//for	
	for( int i = 0 ; i < 10 ; i++ ) {
		/*compound start*/a += i;/*end of stmt*/
	}
	for(int i=0;i<10;i++)
		/*compound start*/a = a+i;/*end of stmt*/
	
	
	//while
	while( a < 100 ) {
		/*compound start*/a += a;/*end of stmt*/
	}
	
	//do-while
	do {
		switch(a) {
			case 100: 
				/*compound start*/a += 10;/*end of stmt*/
				break;
			case 200: 
				/*compound start*/a = a == 3 ? 1 : 2;/*end of stmt*/// ?: operator 
				/*compound start*/a += 20;/*end of stmt*/
				break;
			default:
				/*compound start*/a += 1;/*end of stmt*/
		}
	} while( a == 0 );

	switch(a) {
		case 150:
			/*compound start*/a+=20;/*end of stmt*/
			break;
		case 250:
			/*compound start*/a=a+30;/*end of stmt*/
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

