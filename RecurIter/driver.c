#include "StackOps.h"

int main(){

	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	Stack stack,*stackp;
	stackp=&stack;
	
	createStack(stackp);
	for(i=0;i<10;i++)
		push(stackp,a[i]);
	
	Node *x=top(stackp);
	printf("%d",x->val);
	int y=pop(stackp);
	printf("%d",y);
	printf("%d",isEmpty(stackp));
	x=top(stackp);
	printf("%d",x->val);

	printStack(stackp);

	return 0;
}
