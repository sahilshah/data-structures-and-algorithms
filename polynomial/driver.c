//#include "PolyOps.h"
#include "polynomial.h"
/*
Polynomial createPolynomial(char polyStr[]){
	char *temp;
	temp=polyStr;
	Term *termp;
	Polynomial poly;
	termp=(Term*)malloc(sizeof(Term));
	poly.head=termp;	
	poly.size=0;
	while(temp!='\0'){
		termp->coeff=atoi(temp);
		while(isdigit(*temp)) 
			temp++;
		temp++;
		termp->degree=atoi(temp);
		while(isdigit(*temp))
			temp++;
		termp->next=(Term*)malloc(sizeof(Term));
		termp=termp->next;
		poly.size++;
	}
	termp='\0';
	return poly;
}*/

int main(){
	int i=0,j=0;
	char string[30],coeff[5],degree[5],*degreep,*coeffp,*temp;
	
	Polynomial poly;
	strcpy(string,"1,2 2,4 3,3 5,7 8,1 5,0");
	//temp=string;
	//poly=createPolynomial(temp);
	//char *temp;
	Term *termp;
	//Polynomial poly;
	termp=(Term*)malloc(sizeof(Term));
	poly.head=termp;	
	poly.size=0;
	temp=string;
	while(1){
		i=0;j=0;
		degreep=degree;
		coeffp=coeff;
		while(isdigit(*temp)) 
			*coeffp++=*temp++;
		*coeffp='\0';
		termp->coeff=atoi(coeff);
		printf("\n%d",termp->coeff);
		temp++;
		while(isdigit(*temp))
			*degreep++=*temp++;
		*degreep='\0';
		termp->degree=atoi(degree);
		printf("\n%d",termp->degree);
		termp->next=(Term*)malloc(sizeof(Term));
		termp=termp->next;
		poly.size++;
		if(*temp=='\0')
			break;
		temp++;
	}
	termp=NULL;
	//return poly;
	printf("%s\n",string);
	printf("%d\n",poly.size);

	termp=poly.head;
	while(termp->next!=NULL){
		printf("%d(x^%d)+",termp->coeff,termp->degree);
		termp=termp->next;
	}

	
	return 0;
}
	
	
