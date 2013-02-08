#include <stdio.h>

void merge (int *array, int p, int q, int r){

	int i,merge1,merge2;
	int length=r-p+1;
	int a[length];
	for(i=0;i<length;i++)
		a[i]=array[p+i];

	merge1=0;
	merge2=q-p+1;
	for(i = 0; i<length; i++) {
  	if(merge2<=r-p)
		if(merge1<=q-p)
			if(a[merge1]>array[merge2])
     			array[i+p] = a[merge2++];
    		else
     			array[i+p] = a[merge1++];
		else
			array[i+p] = a[merge2++];
	else
		array[i+p] = a[merge1++];
 	}
}

void mergesort(int *a, int p, int q){

	int i;
	if(p<q){
		i=(p+q)/2;
		mergesort(a,p,i);
		mergesort(a,i+1,q);
		merge(a,p,i,q);
	}
}

int main(){

	int a[10]={2,6,3,8,5,1,9,4,2,10};
	int p=0;
	int q=9;
	mergesort(a,p,q);
	int i;
	for(i=0;i<=q;i++)
		printf("%d\n",a[i]);
	return 0;	

}
