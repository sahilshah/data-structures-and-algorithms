#include <stdio.h>
#include <stdlib.h>
int coins[15]={1,1,3,3,3,5,6,11,11,14,15,16,16,17,20};
#define N 15
#define S 26 

int main(){
	int i,j;
	int sol[S];

	for(i=0;i<S;i++)
		sol[i]=10000;
	sol[0]=0;
	for(i=1;i<S;i++){
		for(j=0;j<N;j++){
			if(coins[j]<=i && sol[i-coins[j]]+1<sol[i])
				sol[i]=sol[i-coins[j]]+1;
		}
	}
	for(i=0;i<S;i++)
		printf("%d\n",sol[i]);

	return 0;
}
