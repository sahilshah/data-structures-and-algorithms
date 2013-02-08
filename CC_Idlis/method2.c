#include <stdio.h>
#define N 3000
int *maxp,*minp;
int count;
void findMaxMin(int *a, int size){
	int i;
	for(i=0;i<size;i++){
		if(a[i]>*maxp)
			maxp=&a[i];
		if(a[i]<*minp)
			minp=&a[i];
		}
}

int redistribute(int *a,int size){
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
	findMaxMin(a,size);
	if(*maxp==*minp)
		return *maxp;
	else{	
		count++;
		redistribute(a,size);
	}
}

int main(){
	int t,i,n,sum,size,result,a[N];
	//int *maxp,*minp;
	scanf("%d",&t);
	while(t--){
		count=1;
		scanf("%d",&n);
		sum=0;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		size=n;
		maxp=&a[0];
		minp=&a[0];
		findMaxMin(a,size);
		if (*maxp==*minp)
			result=0;
		else if ((sum%n)==0)
			result=redistribute(a,size);
		else
			count=-1;
		printf("%d\n",count);
	}
	return 0;
}

