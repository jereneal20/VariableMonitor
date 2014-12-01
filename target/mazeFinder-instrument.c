//
//  main.c
//  hw4-5-2
//
//  Created by 김태진 on 11. 6. 9..
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//


#include <stdio.h>
#define N 12

#define R maze[i][j+1]
#define U maze[i-1][j]
#define D maze[i+1][j]
#define L maze[i][j-1]


int right(char Maze[N][N+1], int Check, int i, int j);
int up(char Maze[N][N+1], int Check, int i, int j);
int down(char Maze[N][N+1], int Check, int i, int j);
int left(char Maze[N][N+1], int Check, int i, int j);
void mazePrint(char Maze[N][N+1]);


int main()
{
    _monitor_init("target/mazeFinder.c");
int i=0,j=0,x=0,y=0;
    int check=0;
char maze[N][N+1] = { //첫번째께 세로 두번째께 가로
        "############",
        "#...#......#",
        "S.#.#.####.#",
        "###.#....#.#",
        "#....###.#.E",
        "####.#.#.#.#",
        "#..#.#.#.#.#",
        "##.#.#.#.#.#",
        "#........#.#",
        "######.###.#",
        "#......#...#",
        "############"};
	{_varCheck_(43,i,0,"i");i=0;}
    
    
    while(1){
        for(j=0;j<N;j++){
            if(maze[i][j]=='S') break;
        }
        if(maze[i][j]=='S') break;
        i++;
    }
    while(1){
        for(y=0;y<N;y++){
            if(maze[x][y]=='E') break;
        }
        if(maze[x][y]=='E') break;
        x++;
    }
    {_varCheck_(60,&maze[i][j],maze[j],"&maze[i][j]");maze[i][j]='X';}
    
    mazePrint(maze);
    while(i!=x || j!=y){
        if(check==0){ //우측으로 왔을때 하우상좌
            if(D!='#'){
                {_varCheck_(66,&maze[i][j],maze[j],"&maze[i][j]");maze[i][j]='.';}
                {_varCheck_(67,&maze[i + 1][j],maze[j],"&maze[i + 1][j]");maze[i+1][j]='X';}
                {_varCheck_(68,i,0,"i");i=i+1;}
                {_varCheck_(69,check,0,"check");check=2;}
            }else if(R!='#'){
                {_varCheck_(71,&maze[i][j],maze[j],"&maze[i][j]");maze[i][j]='.';}
                {_varCheck_(72,&maze[i][j + 1],maze[j + 1],"&maze[i][j + 1]");maze[i][j+1]='X';}
                {_varCheck_(73,j,0,"j");j=j+1;}
                {_varCheck_(74,check,0,"check");check=0;}           
            }else if(U!='#'){
                {_varCheck_(76,&maze[i][j],maze[j],"&maze[i][j]");maze[i][j]='.';}
                {_varCheck_(77,&maze[i - 1][j],maze[j],"&maze[i - 1][j]");maze[i-1][j]='X';}
                {_varCheck_(78,i,0,"i");i=i-1;}
                {_varCheck_(79,check,0,"check");check=1;}
            }else if(L!='#'){
                {_varCheck_(81,&maze[i][j],maze[j],"&maze[i][j]");maze[i][j]='.';}
                {_varCheck_(82,&maze[i][j - 1],maze[j - 1],"&maze[i][j - 1]");maze[i][j-1]='X';}
                {_varCheck_(83,j,0,"j");j=j-1;}
                {_varCheck_(84,check,0,"check");check=3;}
            }    
            mazePrint(maze);
        }
        
        if(check==1){ //상단으로 왔을때 우상좌하
            if(R!='#'){
                {_varCheck_(91,&maze[i][j],maze[j],"&maze[i][j]");maze[i][j]='.';}
                {_varCheck_(92,&maze[i][j + 1],maze[j + 1],"&maze[i][j + 1]");maze[i][j+1]='X';}
                {_varCheck_(93,j,0,"j");j=j+1;}
                {_varCheck_(94,check,0,"check");check=0;}
            }else if(U!='#'){
                {_varCheck_(96,&maze[i][j],maze[j],"&maze[i][j]");maze[i][j]='.';}
                {_varCheck_(97,&maze[i - 1][j],maze[j],"&maze[i - 1][j]");maze[i-1][j]='X';}
                {_varCheck_(98,i,0,"i");i=i-1;}
                {_varCheck_(99,check,0,"check");check=1;}
            }else if(L!='#'){
                {_varCheck_(101,&maze[i][j],maze[j],"&maze[i][j]");maze[i][j]='.';}
                {_varCheck_(102,&maze[i][j - 1],maze[j - 1],"&maze[i][j - 1]");maze[i][j-1]='X';}
                {_varCheck_(103,j,0,"j");j=j-1;}
                {_varCheck_(104,check,0,"check");check=3;}
            }else if(D!='#'){
                {_varCheck_(106,&maze[i][j],maze[j],"&maze[i][j]");maze[i][j]='.';}
                {_varCheck_(107,&maze[i + 1][j],maze[j],"&maze[i + 1][j]");maze[i+1][j]='X';}
                {_varCheck_(108,i,0,"i");i=i+1;}
                {_varCheck_(109,check,0,"check");check=2;}
            }
            mazePrint(maze);
        }
        if(check==3){ //좌측으로 왔을때 상좌하우
            if(U!='#'){
                {_varCheck_(115,&maze[i][j],maze[j],"&maze[i][j]");maze[i][j]='.';}
                {_varCheck_(116,&maze[i - 1][j],maze[j],"&maze[i - 1][j]");maze[i-1][j]='X';}
                {_varCheck_(117,i,0,"i");i=i-1;}
                {_varCheck_(118,check,0,"check");check=1;}
            }else if(L!='#'){
                {_varCheck_(120,&maze[i][j],maze[j],"&maze[i][j]");maze[i][j]='.';}
                {_varCheck_(121,&maze[i][j - 1],maze[j - 1],"&maze[i][j - 1]");maze[i][j-1]='X';}
                {_varCheck_(122,j,0,"j");j=j-1;}
                {_varCheck_(123,check,0,"check");check=3;}
            }else if(D!='#'){
                {_varCheck_(125,&maze[i][j],maze[j],"&maze[i][j]");maze[i][j]='.';}
                {_varCheck_(126,&maze[i + 1][j],maze[j],"&maze[i + 1][j]");maze[i+1][j]='X';}
                {_varCheck_(127,i,0,"i");i=i+1;}
                {_varCheck_(128,check,0,"check");check=2;}
            }else if(R!='#'){
                {_varCheck_(130,&maze[i][j],maze[j],"&maze[i][j]");maze[i][j]='.';}
                {_varCheck_(131,&maze[i][j + 1],maze[j + 1],"&maze[i][j + 1]");maze[i][j+1]='X';}
                {_varCheck_(132,j,0,"j");j=j+1;}
                {_varCheck_(133,check,0,"check");check=0;}
            }
            mazePrint(maze);
        }
        if(check==2){ //하단으로 왔을때 좌하우상
            if(L!='#'){
                {_varCheck_(139,&maze[i][j],maze[j],"&maze[i][j]");maze[i][j]='.';}
                {_varCheck_(140,&maze[i][j - 1],maze[j - 1],"&maze[i][j - 1]");maze[i][j-1]='X';}
                {_varCheck_(141,j,0,"j");j=j-1;}
                {_varCheck_(142,check,0,"check");check=3;}
            }else if(D!='#'){
                {_varCheck_(144,&maze[i][j],maze[j],"&maze[i][j]");maze[i][j]='.';}
                {_varCheck_(145,&maze[i + 1][j],maze[j],"&maze[i + 1][j]");maze[i+1][j]='X';}
                {_varCheck_(146,i,0,"i");i=i+1;}
                {_varCheck_(147,check,0,"check");check=2;}
            }else if(R!='#'){
                {_varCheck_(149,&maze[i][j],maze[j],"&maze[i][j]");maze[i][j]='.';}
                {_varCheck_(150,&maze[i][j + 1],maze[j + 1],"&maze[i][j + 1]");maze[i][j+1]='X';}
                {_varCheck_(151,j,0,"j");j=j+1;}
                {_varCheck_(152,check,0,"check");check=0;}
            }else if(U!='#'){
                {_varCheck_(154,&maze[i][j],maze[j],"&maze[i][j]");maze[i][j]='.';}
                {_varCheck_(155,&maze[i - 1][j],maze[j],"&maze[i - 1][j]");maze[i-1][j]='X';}
                {_varCheck_(156,i,0,"i");i=i-1;}
                {_varCheck_(157,check,0,"check");check=1;}
            }
            mazePrint(maze);
        }
    }
    
    
    return 0;
}

void mazePrint(char Maze[N][N+1])
{
    int a,b;
    for(a=0;a<N;a++){
        for(b=0;b<N+1;b++){
            printf("%c",Maze[a][b]);
        }
        printf("\n");
    }
    printf("\n");
}


