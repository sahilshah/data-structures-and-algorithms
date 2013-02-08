#include "expression.h"

char* convert(char *expr) {

	char c,*ep,*str1,*str2;
	str1=(char*)malloc(20*sizeof(char));
	str2=(char*)malloc(20*sizeof(char));
	c=*expr;
	ep=expr++;

	if (c>='a' && c<='z') {
		return &c;
	}
	
	else{
		str1=convert(ep); // get the first operand 
		str2=convert(ep);	// get the second operand 
		return strcat(strcat(str1,str2),&c); // + denotes string concatenation.
	}
}
