#include <stdio.h>
#include <stdlib.h>

int main(){

	int size=2;
	
	typedef struct {
		int x;
		float y;
		char c;
	} record;
	
	
	record *ptr,*ptr2;
	
	ptr=(record *)calloc(size,sizeof(record));
	ptr->x=12;ptr->y=13.12;ptr->c='i';
	
	/*ptr2=ptr;
	ptr->x=12;ptr->y=13.12;ptr->c='i';
	printf("%d %f %c\n",ptr->x,ptr->y,ptr->c);
	printf("%u\n",ptr);
	ptr++;

	ptr->x=10;ptr->y=15.12;ptr->c='j';
	printf("%d %f %c\n",ptr->x,ptr->y,ptr->c);

	printf("%u\n",ptr);
	*/
	//free (ptr2);
	printf("%u\n",ptr);
	printf("%d %f %c\n",ptr->x,ptr->y,ptr->c);
	free(ptr);
	//printf("%d %f %c\n",ptr2->x,ptr2->y,ptr2->c);
	printf("%d %f %c\n",ptr->x,ptr->y,ptr->c);
	//printf("%u\n",ptr2);
	printf("%u\n",ptr);





	return 0;
}
