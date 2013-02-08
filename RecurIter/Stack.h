#include <stdio.h>
#include <stdlib.h>

struct _node{
	int val;
	struct _node *link;
	};

typedef struct _node Node;

typedef struct{
	Node *head;
	int size;
	}Stack;


