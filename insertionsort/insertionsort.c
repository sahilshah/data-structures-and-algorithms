#include <stdio.h>
#define N 100

void insert(int *a,int element, int position){
	int temp=a[element];
	while(element>position){
		a[element]=a[element-1];
		element--;
	}
	a[position]=temp;
}

void insertionSort(int *a, int size){
	int temp,i,j;
	for(i=1;i<size;i++){
		j=0;
		while(a[j]<=a[i] && j<i)
			j++;
		if(j<i)
			insert(a,i,j);
	}					
}

int main(){
	FILE *fp;
	int i,size=0;
	char c;
	int a[N];
	fp=fopen("numbers.txt","r");
	while(!feof(fp))
		fscanf(fp,"%d\n",&a[size++]);
	insertionSort(a,size);
	for(i=0;i<size;i++)
		printf("%d\n",a[i]);
	
	return 0;
}
