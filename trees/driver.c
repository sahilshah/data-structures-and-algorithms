#include "tree.h"

int main(){

	int array[10]={1,4,2,7,5,9,10,3,11,8};
	int i,j,k;
	LINK temp;
	Tree tree;
	tree=initialiseTree(tree);
	for(i=0;i<10;i++){
		
	}

	for(i=0;i<10;i++){
		tree.root=insertNode(tree.root,&data[i]);
	}

	inorderTreePrint(tree.root);

	return 0;

}
