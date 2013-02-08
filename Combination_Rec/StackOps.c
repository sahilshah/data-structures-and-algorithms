#include "StackOps.h"

Stack createStack(Stack s)
{
	s.head = NULL;
	s.size =0;
	return s;
}
Stack push(Stack s, int a)
{
	StackLink link;
	link = (StackNode *)malloc(sizeof(struct _stacknode));
	link->next = s.head;
	link->element = a;
	s.head = link;
	s.size++;
	return s;
}
int pop(Stack *s)
{
	int elem;	
	StackLink temp;
	temp = s->head;
	s->head = temp->next;
	s->size--;
	elem = temp->element;
	free(temp);
	return elem;
}

int isEmpty(Stack *s){
   if(s->size==0)
      return 1;
   else
      return 0;
}
