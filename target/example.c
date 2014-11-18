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
	
	//if-else if-else
	if( a == 1) {
		a =  2;
	} else if ( a == 2){
		a = 1;
	} else {
		a = 4;
	}	
	
	//for	
	for( int i = 0 ; i < 10 ; i++ ) {
		a += i;
	}
	
	//while
	while( a < 100 ) {
		a += a;
	}
	
	//do-while
	do {
		switch(a) {
			case 100: 
				a += 10;
				break;
			case 200: 
				a = a == 3 ? 1 : 2;// ?: operator 
				a += 20;
				break;
			default:
				a += 1;
		}
	} while( a == 0 );

	switch(a) {
		case 150:
			a+=20;
			break;
		case 250:
			a+=30;
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

