#include "StackOps.h"
#include <stdio.h>

int getCombinationIter(int n, int k){
	Stack s,*sp;
	int temp=0,result=0;
	s=createStack(s);
	sp=&s;
	s=push(s,n);
	s=push(s,k);
	if(n<k)
		return -1;
	
	while(!isEmpty(sp)){
	while(k!=1 && k!=0 && k!=n && (n-k)!=1){
			s=push(s,n);
			s=push(s,k);
			n--;
		}
		if(k==1 || (n-k)==1)
			temp=n;
		if(k==0 || n==k)
			temp=1;
		result=result+temp;
		k=pop(sp);
		n=pop(sp);
		n--;
		k--;
		}	
	return result;
}

int main(){
	int n,k,result;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	printf("enter the value of k:\n");
	scanf("%d",&k);
	result=getCombinationIter(n,k);
	printf("the result is:\n%d\n",result);
	return 0;
}
