#include <stdio.h>
void print(int y){
	int *c;
	c=(int*)malloc(sizeof(int));
	c=&y;
	printf("%d %u\n",*c,c);
	printf("%d %u\n",y,&y);
}
int main(){

	int x;
	x=10;
	print(x);
	x=15;
	print(x);
	x=20;
	print(x);
	x=25;
	print(x);

	return 0;
}
