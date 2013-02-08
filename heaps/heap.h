#include <stdio.h>
#include <stdlib.h>

struct _node{
	int key;
	struct _node *parent;
	struct _node *left;
	struct _node *right;
};

typedef struct _node Node;
typedef struct *Node LINK;

typedef struct{
	LINK root;
	LINK last;
}Heap;

LINK createHeap(LINK root){
	root=(LINK)malloc(sizeof(Node));
	last=root;
	root->parent=NULL;
	root->right=NULL;
	root->left=NULL;
	return root;
}

void insert(){

}


int getHeight(LINK root){
	int count=0; 
	while(root!=NULL){
		root=root->left;
		count++;
	}
	return count;
}

void heapify(LINK elem){

}
