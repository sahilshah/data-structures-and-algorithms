#include <stdio.h>

void quicksort(int *, int, int);
int partition(int *, int, int);
//void swap(int*, int*);

int main(){

	int i,a[10]={38,45,23,90,1,56,31,76,3,10};
	int start=0;
	int end=9;

	quicksort(a,start,end);

	for(i=0; i<=end; i++)
		printf("%d\n",a[i]);
	return 0;
}

swap(int *c, int *b){
int temp;
temp=*c;
*c=*b;
*b=temp;
}


int partition(int a[], int start, int end){
int pivotval;
pivotval=a[end];
int i=start;
int j=end-1;
	while(i<=j){
	while(a[i]<=pivotval)
		i++;
	while(a[j]>pivotval)
		j--;
	if(i<=j){
		swap(&a[i],&a[j]);
		i++;j--;
	}
	}
	swap(&a[end],&a[j+1]);
	return j;
}

void quicksort(int a[], int start, int end){

int i;
if(start<end){
i=partition(a,start,end);
quicksort(a,start,i);
quicksort(a,i+1,end);
}
}
