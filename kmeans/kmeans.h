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
