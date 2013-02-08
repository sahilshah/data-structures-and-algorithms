#include <stdio.h>
#include <stdlib.h>
#define N 3000
int max,min;
void findMaxMin(int *a, int size, int *maxp, int *minp){

	int i;
	
	for(i=0;i<size;i++){
		if(a[i]>*maxp)
			maxp=&a[i];
		if(a[i]<*minp)
			minp=&a[i];
		}
}

int redistribute(int *a,int size,int *maxp,int *minp){

	int temp;
	temp=(*maxp-*minp);
	if (temp%2){
		*maxp-=((temp/2)+1);
		*minp+=((temp/2)+1);
	}
	else{
		*maxp-=(temp/2);
		*minp+=(temp/2);
	}	

	findMaxMin(a,size,maxp,minp);
	if(*maxp==*minp)
		return *maxp;
	else{	
		redistribute(a,size,maxp,minp);
	}
}

int main(){

	int t,i,n,sum,size,result,a[N];
	int *maxp,*minp;
	scanf("%d",&t);

	while(t--){
		scanf("%d",&n);
		sum=0;

		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		size=n;
		//maxp=&a[0];
		//minp=&a[0];
		maxp=(int*)malloc(sizeof(int));
		maxp=(int*)malloc(sizeof(int));
		findMaxMin(a,size,maxp,minp);
		if ((sum%n)==0)
			result=redistribute(a,size,maxp,minp);
		else
			result=-1;

		printf("%d",result);
	}
	return 0;
}

