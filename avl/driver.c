#include "avl.h"

int main(){

	int array[10]={1,4,2,7,5,9,10,3,11,8};
	int i,j,k;
	LINK temp;
	LINK tree;
	tree=createTree();
	for(i=0;i<10;i++){
		temp=buildNode(array[i]);
		tree=insertNode(tree,temp);
	}

	inOrderTreePrint(tree);

	return 0;

}
