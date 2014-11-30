//example.c
int static_var = 1;
struct asdf{

};

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
	_monitor_init("target/example.c");
int a = 0;		
	int *bb;
	int arr[100] = {0};
	{_varCheck_(21,bb,0);bb = arr;}
	f1(a);
	
	//if-else if-else
	if( a == 1) {
		{_varCheck_(26,a,0);a =  2;}
	} else if ( a == 2)
		{_varCheck_(28,a,0);a = 1;}
	 else {
		{_varCheck_(30,a,0);a = f1(1);}
		{_varCheck_(31,arr[a],0);arr[a] = 20;}
	}
	{_varCheck_(33,(bb + 30),1);*(bb+30) = 10;}
	{_varCheck_(34,arr[99],0);arr[99] = 30;}
//	printf("%d",arr[140]);
	{_varCheck_(36,bb,0);bb = (struct asdf *)malloc( sizeof(int)*4);}
	{_varCheck_(37,bb,0);bb = malloc(_mallocCheck_(sizeof(int)*5));}
	//for	
	for( int i = 0 ; i < 10 ; i++ ) {
		{_varCheck_(40,a,0);a += i;}
	}
	for(int i=0;i<10;i++)
		{_varCheck_(43,a,0);a = a+i;}
	
	
	//while
	while( a < 100 ) {
		{_varCheck_(48,a,0);a += a;}
	}
	
	//do-while
	do {
		switch(a) {
			case 100: 
				{_varCheck_(55,a,0);a += 10;}
				break;
			case 200: 
				{_varCheck_(58,a,0);a = a == 3 ? 1 : 2;}// ?: operator 
				{_varCheck_(59,a,0);a += 20;}
				break;
			default:
				{_varCheck_(62,a,0);a += 1;}
		}
	} while( a == 0 );

	switch(a) {
		case 150:
			{_varCheck_(68,a,0);a+=20;}
			break;
		case 250:
			{_varCheck_(71,a,0);a=a+30;}
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

