#include<stdio.h>
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
	{_varCheck_();bb = arr;}
	f1(a);
	
	//if-else if-else
	if( a == 1) {
		{_varCheck_();a =  2;}
	} else if ( a == 2)
		{_varCheck_();a = 1;}
	 else {
		{_varCheck_();a = f1(1);}
		{_varCheck_();arr[a] = 20;}
	}
	{_varCheck_();*(bb+30) = 10;}
	{_varCheck_();arr[99] = 30;}
//	printf("%d",arr[140]);
//	{_varCheck_();bb = (struct asdf *)malloc( sizeof(int)*4);}
//	{_varCheck_();bb = /*start*/malloc _mallocCheck_((sizeof(int)*5));}
	//for	
	for( int i = 0 ; i < 10 ; i++ ) {
		{_varCheck_();a += i;}
	}
	for(int i=0;i<10;i++)
		{_varCheck_();a = a+i;}
	
	
	//while
	while( a < 100 ) {
		{_varCheck_();a += a;}
	}
	
	//do-while
	do {
		switch(a) {
			case 100: 
				{_varCheck_();a += 10;}
				break;
			case 200: 
				{_varCheck_();a = a == 3 ? 1 : 2;}// ?: operator 
				{_varCheck_();a += 20;}
				break;
			default:
				{_varCheck_();a += 1;}
		}
	} while( a == 0 );

	switch(a) {
		case 150:
			{_varCheck_();a+=20;}
			break;
		case 250:
			{_varCheck_();a=a+30;}
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

