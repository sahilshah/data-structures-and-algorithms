#include <stdio.h>
#include <stdlib.h>

struct record{
int x;
float y;
struct record *next;
};
typedef struct record record;

int main(){
	int size=5;
	record *start,*ptr,*current;	
	int i;
	start=(record*)malloc(sizeof(record));
	current=start;
	for(i=0;i<size;i++){
	printf("\nenter values:\n");
	scanf("%d %f",&current->x,&current->y);
	if(i==size-1)
		current->next=NULL;
	else{
		current->next=(record*)malloc(sizeof(record));
		current=current->next;
		}
	}
	record *now;
	now=start;

	while(now!=NULL)
	{
	printf("\n%d %f",now->x,now->y);
	now=now->next;
	}

return 0;
}


