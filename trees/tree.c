#include "tree.h"

Tree initialiseTree(Tree tree){
	tree.root='\0';
	tree.size=0;
	return tree;
}

void inorderTreePrint(Node *root){
	int count=0;
	if(root!=NULL){
		inorderTreePrint(root->left);
		printf("%d\n",root->key);
		inorderTreePrint(root->right);
	//	printf("%d\n",10+count++);
	}
	//else
		//printf("%d\n",count++);
}

Node* searchKey(Node *root, int key){
	Node *found;
	if(root==NULL)
		found=NULL;
	else if(key==root->key)
		found=root;
	else if (key>root->key)
		found=searchKey(root->right,key);
	else 
		found=searchKey(root->left,key);
	return found;
}

Node* minimum(Node *root){
	while(root->left!=NULL)
		root=root->left;
	return root;
}

Node* maximum(Node* root){
	while(root->right!=NULL)
		root=root->right;
	return root;
}

Node* getSuccessor(Node* node){
	Node *y;
	if(node->right!=NULL)
		return minimum(node->right);
	else{
		y=node->parent;
		while(y!=NULL && y->right==node){
			node=y;
			y=y->parent;
		}
		return minimum(y->right);
	}
}


//void insertNode(Tree tree, Node *x){ on using this definition I wasted 1 hour because everytime I wasn't returning the local variable so the function which called this function never got any value calculated in this function and thus my tree.root was always equal to NULL. I SUCK, but I LEARN!!
Node* insertNode(Node* treeroot, Node *x){
	int key;
	key=x->key;
	Node *root, *temp;
	root=treeroot;
	temp=NULL;
	printf("tree.root %u\n",treeroot);
	while(root!=NULL){
		temp=root;
		printf("while printed\n\n");
		if(x->key>root->key)
			root=root->right;
		else
			root=root->left;
	}

	if(temp==NULL){
		treeroot=x;
		printf("%d %u",treeroot->key,treeroot);
		printf("if printed\n\n");
	}
	else if(temp->key>x->key){
		temp->left=x;
		x->parent=temp;
		printf("left\n\n");
	}
	else{
		temp->right=x;
		x->parent=temp;
		printf("right\n\n");
	}		
	return treeroot;
}

/*

void transplant(Tree tree, Node *y, Node *z){	//takes z and places it in position of y. surprisingly the parent of z doesn't change and y totally vanishes as a child but still has a reference to its parent. crazy method. CHECK!!
	if(y->parent==NULL)
		tree.root=z;
	else if (y==y->p->left)
		y->p->left=z;
	else
		y->p->right=z;
	z->p=y->p;	
}


void deleteNode(Tree tree, Node *z){

	Node *y;
	if(z->right==NULL && z->left==NULL){
		if(z==z->parent->right)
			z->parent->right=NULL;
		else
			z->parent->left=NULL;
	}
	else if (z->left==NULL && z->right!=NULL){
		transplant(tree,z,z->right);
	}
	else if (z->right==NULL && z->left!=NULL){
		transplant(tree,z,z->left);
	}
	else
		y=minimum(z->right);
		if(y->p!=z){
			transplant(tree,y,y->right);
			y->right
		}
	
//lot of code pending

}
*/



