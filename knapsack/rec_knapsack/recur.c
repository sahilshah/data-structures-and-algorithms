#include <stdio.h>
#include <stdlib.h>
#define N 10
#define W 23

typedef struct{
	int benefit;
	int weight;
	int flag;
}item;

typedef item ItemList[N];
ItemList items={{21,1,1},{24,3,1},{32,5,1},{12,7,1},{27,8,1},{18,10,1},{19,13,1},{31,17,1},{17,19,1},{25,20,1}};
int min[N][W]={0};
int main(){
	int i,j,k,w;
	
/*
	for(k=1;k<N;k++){
		for(w=0;w<W;w++){
			if(w<items[k].weight)
				min[k][w]=min[k-1][w];
			else{				
				if(min[k-1][w]>=min[k-1][w-items[k].weight]+items[k].benefit)
					min[k][w]=min[k-1][w];
				else
					min[k][w]=min[k-1][w-items[k].weight]+items[k].benefit;
			}
		}
	}
*/
int knapsack(int km, int wm){
	for(w=0;w<W;w++){
		if(w<items[k].weight)
			min[k][w]=min[k-1][w];
		else{				
			if(min[k-1][w]>=min[k-1][w-items[k].weight]+items[k].benefit)
				min[k][w]=min[k-1][w];
		}
	}
}
	for(i=0;i<N;i++){
		for(j=0;j<W;j++)
			printf("%d ",min[i][j]);
		printf("\n");
	}
	
	return 0;
}
