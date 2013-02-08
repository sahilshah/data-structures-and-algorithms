#include <stdio.h>
#include <string.h>

char* convert(char *expr) {

	char c;
	c=*expr;
	expr++;

	if (c>='a' && c<='z') {
		return &c;
	}
	
	else{
		str1=convert(expr); // get the first operand 
		str2 = convert(expr);	// get the second operand 
		return strcat(str1,str2,&c); // + denotes string concatenation.
	}
}
