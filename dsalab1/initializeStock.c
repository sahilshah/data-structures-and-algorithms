#include "StockOps.h"

Stock * initializeStock(FILE *file){

char c,*num,*string;
Stock *sp;
Box *boxlist;
Fruit *fruitlist;

sp=(Stock*)malloc(sizeof(Stock));
boxlist=(Box*)malloc(sizeof(Box));
sp->head=boxlist;

do{
	boxlist->boxnumber=getw(file);
	fruitlist=(Fruit*)malloc(sizeof(Fruit));
	boxlist->head=fruitlist;
	while((c=getc(file))!='/n' && c!=EOF)
	{	
	fscanf(file,"%s",string);
	while(isdigit(*string)){
		*num=*string;
		num++;
		string++;
		}
	*num='\0';
	fruitlist->number=atoi(num);
	strcpy(fruitlist->name,string);
	fruitlist->next=(Fruit*)malloc(sizeof(Fruit));
	boxlist->tail=fruitlist;
	fruitlist=fruitlist->next;
	boxlist->size++;
	}
boxlist->next=(Box*)malloc(sizeof(Box));
sp->tail=boxlist;
boxlist=boxlist->next;
sp->size++;
}
while(c!=EOF);
return sp;
}
