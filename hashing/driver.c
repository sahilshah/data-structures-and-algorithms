#include "HtableOps.h"

int main(){

	FILE *fp;
	HTable Students;
	Tuple rec;
	Tuple *recordp;
	char x[12];
	int m=10;
	recordp=(Tuple*)malloc(sizeof(Tuple));
	fp=fopen("input.txt","r");
	initialiseHtable(Students,m);
	while(!feof(fp)){
		fscanf(fp,"%s %s\n",recordp->id,recordp->name);
		insertElement(Students,m,recordp);
		//printf("\n%d\n",getSize(Students,m));
		//printRecord(recordp);
	}

	printf("\nEnter the ID you want to search:\n");
	scanf("%s",x);
	rec=findElem(Students,m,x);
	printf("\n\n\n");
	recordp=&rec;
	printRecord(recordp);

	//printf("\n\n\n\n\n\n");
	//printAllElem(Students, x);
	
	return 0;
}

