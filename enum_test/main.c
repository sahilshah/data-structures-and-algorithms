#include <stdio.h>

int main(){

	int i;
enum suit{
	S,H,D,C
	};

	enum suit cardsuit;
	char c;
	//for(i=0;i<3;i++)
		scanf("%c",&c);
	cardsuit=c;
	//for(i=0;i<3;i++)
		printf("%d\n",cardsuit);
	switch(cardsuit){
		case(0):
			printf("spades");
			break;
		case(1):
			printf("hearts");
			break;
		case(2):
			printf("diamonds");
			break;
		case(3):
			printf("clubs");
			break;
		default:
			printf("invalid suit");
		}
	return 0;

}
