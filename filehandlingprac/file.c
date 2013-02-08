#include <stdio.h>

int main(){

	FILE *fp;

	fp=fopen("boxes.txt","r");

	char c;
	long n;
	int box;
	rewind(fp);
	//n=ftell(fp);
	//printf("\n%ld\n",n);
	box=getw(fp);
	printf("\n%d\n",box);
	//n=ftell(fp);
	//printf("\n%ld\n",n);
/*
	fseek(fp,-2,1);
	box=getw(fp);
	printf("\n%d\n",box);
	n=ftell(fp);
	printf("\n%ld\n",n);
	*/
	


return 0;
}
