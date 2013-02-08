#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

	int key;
	char name[10];
	int age;
}data;

struct _node{
	int key;
	struct _node *parent;
	struct _node *right;
	struct _node *left;
};

typedef struct _node Node; 

typedef struct{
	Node *root;
	int size;
}Tree;

extern Tree initialiseTree(Tree tree);
extern void inorderTreePrint(Node *root);
extern Node* insertNode(Node *treeroot, Node *x);
