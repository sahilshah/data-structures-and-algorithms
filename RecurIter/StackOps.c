#include "StackOps.h"

Stack createStack(){
	Stack stack;
	stack.head=NULL;
	stack.size=0;
}

Node* top(Stack *stackp){
	return stackp->head;
}

int isEmpty(Stack *stackp){
	if(stackp->head==NULL)
		return 1;
	else
		return 0;
}

void push(Stack *stackp, int elem){
	Node *temp;
	temp=(Node*)malloc(sizeof(Node));
	temp->val=elem;
	temp->link=stackp->head;
	stackp->head=temp;
	stackp->size++;
}

int pop(Stack *stackp){

	int elem;
	Node *temp;
	temp=stackp->head;
	elem=stackp->head->val;
	stackp->head=stackp->head->link;
	free(temp);
	stackp->size--;
	return elem;
}

void printStack(Stack *stackp){
	
	Node *temp;
	for(temp=stackp->head;temp!=NULL;temp=temp->link)
		printf("%d",temp->val);
}
