//#include "kmeans.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 1000
#define K 20
#define RANDOM 1

typedef struct{
	float x;
	float y;
}point;

#ifndef RANDOM
extern float pythagoras(point one, point two);
extern void getDistance(float **distance, point *kmeans, point *points, int k, int size);
extern void getClusters(int **cluster, int *points, int k, int size);
#endif

float pythagoras(point one, point two){
	float result;
	result=sqrt(((one.x-two.x)*(one.x-two.x)+(one.y-two.y)*(one.y-two.y)));
	return result;
}

void getDistance(float **distance, point *kmeans, point *points, int k, int size){
	int i,j;
	point *temp;
	temp=kmeans;
	for(i=0;i<k;i++){
		for(j=0;j<size;j++){
			distance[i][j]=pythagoras(kmeans[i],points[j]);
		}
	}
}

void getClusters(point *kmeans, int **cluster, int *points, int k, int size){
	float mindist,distance[k][size];
	int i,j,mean,temp;
	getDistance(distance,kmeans,points,k,size);
	for(j=0;j<size;j++){
		mindist=distance[0][j];
		temp=0;
		for(i=0;i<k;i++){
			if(distance[i][j]<mindist){
				mindist=distance[i][j];
				temp=j;
				}
		}
		*cluster[i]=temp;
		cluster[i]++;
		*cluster[i]=-999;
	}	
}

int recalculateMeans(point *kmeans, int **cluster, point *points, int k){
	int i,j,sumx,sumy,equal=1;
	point newkmeans[k];
	for(i=0;i<k;i++){
		sumx=0;
		sumy=0;
		for(j=0;cluster[i][j]!=-999;j++){
			sumx=sumx+points[cluster[i][j]].x;
			sumy=sumy+points[cluster[i][j]].y;
		}
		newkmeans[i].x=(sumx/j);
		newkmeans[i].y=(sumy/j);
	}
	for(i=0;i<k;i++){
		if(newkmeans[i].x!=kmeans[i].x || newkmeans[i].y!=kmeans[i].y)
			kmeans[i]=newkmeans[i];
		else
			equal++;
	}
	if(equal==k)
		return 1;
	else
		return 0;
}

int main(){
	FILE *fp;
	int i,k,size=0,random[K];
	point points[N],kmeans[K];	//kmeans stores the values of k means and points are the data points.
	int cluster[K][N];	//indices of the points assigned to kth mean stored in cluster[k] array
	printf("enter value of k");
	scanf("%d",&k);
	fp=fopen("input.txt","r");
	while(!feof(fp)){
		fscanf(fp,"%f %f\n",&points[i].x,&points[i].y);
		i++;
	}
	size=i;
	for(i=0;i<k;i++){
		random[i]=rand()%size;
		kmeans[i].x=points[random[i]].x;
		kmeans[i].y=points[random[i]].y;
	}
	getClusters(kmeans,cluster,points,k,size);
	while(1){
		if(recalculateMeans(kmeans,cluster,points,k)==1)
			break;
		else
			getClusters(kmeans,cluster,points,k,size);
	}	
	return 0;
}


