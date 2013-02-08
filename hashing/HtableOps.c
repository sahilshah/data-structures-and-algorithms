#include "HtableOps.h"

void copyTuple(Tuple *source, Tuple *dest){
	strcpy(dest->name,source->name);
	strcpy(dest->id,source->id);
	dest->keyval=source->keyval;
	dest->next=source->next;
}

int getHashMap(key x,int m){
	int index,temp;
	char *string;
	string=x+8;
	temp=atoi(string);
	//printf("\n%s\n",string);
	index=temp%m;
	//printf("\n%d\n",index);
	return index;
}

int getSize(HTable ht, int m){
	int size=0,i;
	for(i=0;i<m;i++)
		size=size+ht[i].size;

	return size;
}

int isEmpty(HTable ht, int m){
	if(getSize(ht,m)==0)
		return 1;
	else
		return 0;
}

Tuple findElem(HTable ht, int m, key id){
	int index;
	Tuple *temp;
	Tuple nil={0,0,0,0};
	index=getHashMap(id,m);
	temp=ht[index].head;
	while(temp!=NULL){
		if(strcmp(id,temp->id)!=0)
			temp=temp->next;
		else
			return *temp;
	}	
	return nil;
}

HTKeyList findAllElem(HTable ht, int m, key id){
	int index;
	index=getHashMap(id,m);
	return ht[index];
}

void insertElement(HTable ht, int m, Tuple *elem){
	int index;
	Tuple *temp;
	temp=(Tuple*)malloc(sizeof(Tuple));
	index=getHashMap(elem->id,m);
	elem->keyval=index;
	copyTuple(elem,temp);
	printf("\n%s\t%s\t%d\n",temp->name,temp->id,temp->keyval);
	temp->next=ht[index].head;
	ht[index].head=temp;
	ht[index].size++;
}

int deleteElement(HTable ht, int m, Tuple elem){

	int index;
	Tuple *temp,*prev;
	index=getHashMap(elem.id,m);
	prev=ht[index].head;
	if(prev==NULL)
		printf("error\n");
		return 0;
	while(prev->next!=NULL){
		temp=prev->next;
		if(strcmp(elem.id,temp->id)!=0)
			prev=prev->next;
		else{
			prev=temp->next;
			free(temp);
			ht[index].size--;
			return 1;
		}
	}
	return 0;	
}

void removeAllElem(HTable ht, int m, Tuple elem){

	int index;
	Tuple *temp,*cur;
	index=getHashMap(elem.id,m);
	temp=ht[index].head;
	while(temp!=NULL){
		cur=temp;
		temp=temp->next;
		free(cur);
	}
	ht[index].head=NULL;
	ht[index].size=0;
}

void printRecord(Tuple* record){
	printf("%s\t%s\n",record->name,record->id);
}

void printAllElem(HTable ht, int k){
	Tuple *toprint;
	toprint=ht[k].head;
	while(toprint!=NULL){
		printRecord(toprint);
		toprint=toprint->next;
	}
}

void initialiseHtable(HTable ht, int m){
	int i;
	for(i=0;i<m;i++){
		ht[i].head=NULL;
		ht[i].size=0;
	}
}

