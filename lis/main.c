//implementation of bottom up longest increasing subsequence

#include <stdio.h>
#define N 10

typedef struct{
	int key;
	int prev;	//stores index of prev integer for the sequence
}item;

typedef item list[N];
list items={{4,-1},{5,-1},{2,-1},{7,-1},{3,-1},{8,-1},{5,-1},{6,-1},{7,-1},{9,-1}};

int main(){
	int maxl[N],seq[N];
	int i,j,k,temp,max;
	for(i=0;i<N;i++)
		maxl[i]=1;	
	for(i=1;i<N;i++){
		for(j=i-1;j>=0;j--){
			if(items[i].key>items[j].key){
				if(maxl[i]<=maxl[j]){
					maxl[i]=1+maxl[j];
					items[i].prev=j;
				}
			}
		}
	}
	max=0;
	for(i=0;i<N;i++){
		if(maxl[max]<maxl[i])
			max=i;
	}		
	temp=max;
	k=0;
	while(temp!=-1){
		seq[k]=items[temp].key;
		temp=items[temp].prev;
		k++;
	}
	for(i=k-1;i>=0;i--)
		printf("%d\t",seq[i]);
	printf("\n");
	return 0;
}
