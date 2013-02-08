#include <stdio.h>
#include <stdlib.h>
int seq[15]={1,3,2,4,6,4,5,8,10,12,7,9,13,15,17};
#define N 15

int main(){
	int i,j,ans[N];
	for(i=0;i<N;i++)
		ans[i]=1;
	for(i=0;i<N;i++){
		for(j=0;j<i;j++){
			if(seq[j]<=seq[i] && ans[j]+1>ans[i])
				ans[i]=ans[j]+1;
		}
	}
	for(i=0;i<N;i++)
		printf("%d\t%d\t%d\n",i,seq[i],ans[i]);
	return 0;
}

