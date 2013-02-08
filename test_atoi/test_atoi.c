//READ ME!!
//about atoi: If a string starts from blank spaces then it takes them lite and then converts the first char chain to number
//but it doesn't take lite if the string starts from chars whioch are not numbers.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){


	int num;
	char string[30];
	char *temp;

	strcpy(string,"\ts2,3 5, 4 5,6 4,2");
	printf("%s\n",string);
	temp=string;
	printf("%u\n",temp);
	num=atoi(temp);
	printf("%u\n",temp);
	//num *= 2;
	printf("%d\n",num);
	return 0;
	}
