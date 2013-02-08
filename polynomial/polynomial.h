#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _term Term;

struct _term{
	int coeff;
	int degree;
	Term *next;
};


typedef struct{
	int size;
	Term *head;
}Polynomial;

//Polynomial poly1,poly2,answer;
