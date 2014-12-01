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
	i=0;
    
    
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
    maze[i][j]='X';
    
    mazePrint(maze);
    while(i!=x || j!=y){
        if(check==0){ //우측으로 왔을때 하우상좌
            if(D!='#'){
                maze[i][j]='.';
                maze[i+1][j]='X';
                i=i+1;
                check=2;
            }else if(R!='#'){
                maze[i][j]='.';
                maze[i][j+1]='X';
                j=j+1;
                check=0;           
            }else if(U!='#'){
                maze[i][j]='.';
                maze[i-1][j]='X';
                i=i-1;
                check=1;
            }else if(L!='#'){
                maze[i][j]='.';
                maze[i][j-1]='X';
                j=j-1;
                check=3;
            }    
            mazePrint(maze);
        }
        
        if(check==1){ //상단으로 왔을때 우상좌하
            if(R!='#'){
                maze[i][j]='.';
                maze[i][j+1]='X';
                j=j+1;
                check=0;
            }else if(U!='#'){
                maze[i][j]='.';
                maze[i-1][j]='X';
                i=i-1;
                check=1;
            }else if(L!='#'){
                maze[i][j]='.';
                maze[i][j-1]='X';
                j=j-1;
                check=3;
            }else if(D!='#'){
                maze[i][j]='.';
                maze[i+1][j]='X';
                i=i+1;
                check=2;
            }
            mazePrint(maze);
        }
        if(check==3){ //좌측으로 왔을때 상좌하우
            if(U!='#'){
                maze[i][j]='.';
                maze[i-1][j]='X';
                i=i-1;
                check=1;
            }else if(L!='#'){
                maze[i][j]='.';
                maze[i][j-1]='X';
                j=j-1;
                check=3;
            }else if(D!='#'){
                maze[i][j]='.';
                maze[i+1][j]='X';
                i=i+1;
                check=2;
            }else if(R!='#'){
                maze[i][j]='.';
                maze[i][j+1]='X';
                j=j+1;
                check=0;
            }
            mazePrint(maze);
        }
        if(check==2){ //하단으로 왔을때 좌하우상
            if(L!='#'){
                maze[i][j]='.';
                maze[i][j-1]='X';
                j=j-1;
                check=3;
            }else if(D!='#'){
                maze[i][j]='.';
                maze[i+1][j]='X';
                i=i+1;
                check=2;
            }else if(R!='#'){
                maze[i][j]='.';
                maze[i][j+1]='X';
                j=j+1;
                check=0;
            }else if(U!='#'){
                maze[i][j]='.';
                maze[i-1][j]='X';
                i=i-1;
                check=1;
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


