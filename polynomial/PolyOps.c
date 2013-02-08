//#include "PolyOps.h"
#include "polynomial.h"

Polynomial createPolynomial(char *polyStr){
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
}

/*

void insertInOrder(Polynomial *poly, Term *term){
	
	




}
Polynomial addPoly(Polynomial *poly1, Polynomial *poly2){






}
void printPoly(Polynomial *poly){




}
*/
