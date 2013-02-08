#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define DEST_ROW 7
#define DEST_COL 7
#define MAX_ROW 16
#define MAX_COL 16

typedef int Boolean;
typedef struct{
	Boolean n;
	Boolean s;
	Boolean e;
	Boolean w;
	int value;
}cell;

typedef cell Maze[MAX_ROW][MAX_COL];
Maze micromouse;
micromouse={0,0,0,0,-1};

void initializeMaze(){
	int i,j;
	for(i=0,j=0;i<MAX_ROW,j<MAX_COL;i++,j++){
		micromouse[i][j].value=abs(DEST_ROW-i)+abs(DEST_COL-j);
	}
}

void updateWalls(Maze microm, int i, int j){
	if(isWall(microm[i][j].n)){
		microm[i][j].n=1;
		if(j-1>=0)
			microm[i][j-1].s=1;
	}
	if(isWall(microm[i][j].s)){
		microm[i][j].s=1;
		if(j+1<MAX_COL)
			microm[i][j+1].n=1;
	}
	if(isWall(microm[i][j].e)){
		microm[i][j].e=1;
		if(i+1<MAX_ROW)
			microm[i+1][j].w=1;
	}
	if(isWall(microm[i][j].w)){
		microm[i][j].w=1;
		if(i-1>=0)
			microm[i-1][j].e=1;
	}

}


void updateCellValues(){

} 
