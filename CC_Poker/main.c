#include <stdio.h>

enum number{
	A,1,2,3,4,5,6,7,8,9,10,J,Q,K
  	};

  //	enum suit{
  //	S,H,D,C
  //	};

typedef struct{
	char cardsuit;
	enum number cardnumber;
	}card;

int main(){

	int t;
	scanf("%d",&t);

	while(t--){
	
		card hand[5];			

		scanf("%d%c %d%c %d%c %d%c %d%c\n",&hand[0].cardnumber,&hand[0].cardsuit,&hand[1].cardnumber,&hand[1].cardsuit,&hand[2].cardnumber,&hand[2].cardsuit,&hand[3].cardnumber,&hand[3].cardsuit,&hand[4].cardnumber,&hand[4].cardsuit);

		switch(hand[i].cardnumber){
			case('K'):
				hand[i].cardnumber=12;
				break;
			case('Q'):
				hand[i].cardnumber=11;
				break;
			case('J'):
				hand[i].cardnumber=10;
				break;
			case('A'):
				hand[i].cardnumber=0;
				break;
			default:
				hand[i].cardnumber=-1;
				break;
	}

	

	if(hand[0].cardsuit==hand[1].cardsuit==hand[2].cardsuit==hand[3].cardsuit==hand[4].cardsuit)
	{	
		if 
		
			




	}



}
