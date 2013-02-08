#include "avl.h"

LINK createTree()
{
	LINK root=(LINK)malloc(sizeof(Node));
	root->key=-1;
	root->left=NULL;
	root->right=NULL;
	return root;
}

int getHeight(LINK root){
	if(root==NULL)
		return 0;
	else if(getHeight(root->left)>getHeight(root->right))
		return(1+getHeight(root->left));
	else
		return (1+getHeight(root->right));
}

/*
LINK searchKey(LINK root, int key){
	LINK found;
	if(root==NULL)
		found=NULL;
	else if(key==root->key)
		found=root;
	else if (key>root->key)
		found=searchKey(root->right,key);
	else 
		found=searchKey(root->left,key);
	return found;
}*/

void swap(LINK x, LINK y){
	int temp;
	temp=x->key;
	x->key=y->key;
	y->key=temp;
}

LINK buildNode(int key, LINK link){
	Node x;
	x.left=NULL;
	x.right=NULL;
	x.key=key;
	return link=&x;
}m



LINK isNodeBalanced(LINK root){
	int diff;
	diff=getHeight(root->left)-getHeight(root->right);
	if(diff>1 || diff<-1)
		return root;
	else
		return NULL;
}

LINK isTreeBalanced(LINK root){	//checks if tree is balanced, returns NULL for balance, else unbalanced node
	if(root==NULL)
		return NULL;
	int right,left,diff;
	right=getHeight(root->right);
	left=getHeight(root->left);
	diff=right-left;
	if(diff>1 || diff<-1)
		return root;
	else{
		return isTreeBalanced(root->left);
		return isTreeBalanced(root->right);
	}
}

LINK treebalance(LINK root){
	LINK x,y,z;
	LINK a,b,c;
	LINK t1,t2,t3,t4;
	if(getHeight(root->left)>getHeight(root->right)){	
		a=root;
		if(getHeight(a->left->left)>getHeight(a->left->right)){
			b=a->left;
			c=b->left;
			a->left=b->right;
		}
		else{
			b=a->left->right;
			c=a->left;
			c->right=b->left;
			a->left=b->right;
		}
	}
	else{
		c=root;
		if(getHeight(c->right->right)>getHeight(c->right->left)){
			b=c->right;
			a=b->right;
			c->right=b->left;
		}
		else{
			b=c->right->left;
			a=c->right;
			c->right=b->left;
			a->left=b->right;
		}
	}
	LINK temp=b;
	b->left=c;
	b->right=a;
	return b;
}

LINK delete(LINK root, int key){
	if(root==NULL)
		return NULL;
	if(key>root->key)
		root->right=delete(root->right,key);
	else if(key<root->key)
		root->left=delete(root->left,key);
	else if(key==root->key){
		if(root->left==NULL)
			return root->right;
		else{
			LINK h=root->right;
			while(h->left!=NULL)
				h=h->left;
			root->key=h->key;
			root->right=delete(root->right,h->key);
		}
	} 
	if(isNodeBalanced(root)!=NULL)
		treebalance(root);
	return root;
}

void inOrderTreePrint(LINK root){
	if(root!=NULL){
		inOrderTreePrint(root->left);
		printf("%d\n",root->key);
		inOrderTreePrint(root->right);
	}
}

LINK insertNode(LINK root, LINK x){
	if(root==NULL)
		return (x);
	else if(x->key > root->key)
		root->right=insertNode(root->right,x);
	else if(x->key < root->key)
		root->left=insertNode(root->left,x);
	if((isNodeBalanced(root))!=NULL)
		root=treebalance(root);
	return root;
}



