#include <stdio.h>
#include <stdlib.h>
#define N 100

void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void bubblesort(int *a, int size){

	int i,j;

	for(i=0;i<size;i++){
		for(j=size-1;j>i;j--)	{
			if(a[j]<a[j-1])	
				swap(&a[j],&a[j-1]);
		}
	}
}

int main(int argc, int *argv[]){

	int a[N],i,size;
	FILE *fp;
	fp=fopen(argv[1],"r");
	while(!feof(fp))
		fscanf(fp,"%d\n",&a[size++]);
	fclose(fp);
	
	bubblesort(a,size);
	fp=fopen(argv[2],"w");
	for(i=0;i<size;i++)
		fprintf(fp,"%d\n",a[i]);

	return 0;
}
