#include <stdio.h>

int main(){
	int m,n;
	printf("enter two nos for GCD (bigger first):\n");
	scanf("%d\n%d",&m,&n);

	printf("the gcd of %d and %d is:\n%d",m,n,getGCD(m,n));
	return 0;
}

int getGCD(int m, int n){
	int r;
	r=m%n;
	if(r==0)
		return n;
	else
		return getGCD(n,r);
}
