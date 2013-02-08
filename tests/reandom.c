#include <stdio.h>

int main(){
	int i,j;
	i=0;
	j=4;
	int a[]={10, 9, 3, 5, 2, 7, 4, 0, 1};
	while(a[i++]>a[j]);
	printf("%d\t%d\n",i,a[i]);
	return 0;
}
