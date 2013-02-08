//nck = n-1ck-1 + n-1ck
#include <stdio.h>

int getCombination(int n, int k){
	int result;
	if(n<k || k<0 || n<0)
		printf("error");
	else if(k==n || k==0)
		return 1;
	else{
		result=getCombination(n-1,k-1) + getCombination(n-1,k);
		return result;
	}
}

int main(){
	int n,k,result;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	printf("enter the value of k:\n");
	scanf("%d",&k);
	result=getCombination(n,k);
	printf("the result is:\n%d",result);
	return 0;
}
