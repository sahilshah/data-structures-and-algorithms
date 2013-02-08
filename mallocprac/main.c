#include <stdio.h>
#include <stdlib.h>

int main(){

	int *i, *ptr;
	int size;

	printf("enter the size of the table: ");
	scanf("%d",&size);

	if ((ptr=(int*)malloc(size*sizeof(int)))==NULL)
		printf("Sorry! No size available");
	else
		printf("Size is available from memory address %u\n",ptr);

	printf("start entering values");

	for(i=ptr; i<ptr+size; i++)
		scanf("%d",i);
	for(i=ptr+size-1;i>=ptr;i--)
		printf("%d and %u\n",*i, i);

return 0;
}
