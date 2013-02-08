#include "graph.h"

queue init(queue q){
	q.head=NULL;
	q.size=0;
}

int isEmpty(queue q){
	if(q.size==0)
		return 1;
	else
		return 0;
}

void addNode(queue* q, LINK e){
	LINK temp;
	temp=q->head;
	q->head=(LINK)malloc(sizeof(node));
	e->next=temp;
	q->head=e;
	q->size++;
}

LINK getHead(queue *q){
	LINK temp;
	temp=q->head;
	if(temp!=NULL)
		q->head=temp->next;
	q->size--;
	return temp;
}
