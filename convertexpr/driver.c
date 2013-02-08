#include "expression.h"

char* convert(char *expr) {
	char c[2],*ep,*str1,*str2;
	c[0]=*expr;
	c[1]='\0';
	//ep=expr;
	expr++;
	//free(ep);
	if (c[0]>='a' && c[0]<='z')
		return c;
	else{
		str1=convert(expr); // get the first operand 
		str2=convert(expr);	// get the second operand 
		return strcat(strcat(str1,str2),c); // + denotes string concatenation.
	}
}

int main(){

	char expression[]="^@&abcd",*result;
	//strcpy(expression,"^@&abcd");
	//ep=expression;
	result=convert(expression);
	printf("\n%s\n",result);

	return 0;
}
