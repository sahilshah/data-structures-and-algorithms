#include "rect.h"
#include <stdio.h>

Rect createRect(void){
Rect R1={0,0};
return R1;
}

Rect getData(Rect R1){
printf("enter the length");
scanf("%d",&R1.length);
printf("enter the width");;
scanf("%d",&R1.width);
return R1;
}

int isSquare(Rect R1){
if(R1.length==R1.width)
return 1;
else
return 0;
}

int isEqual(Rect R1, Rect R2){

if(R1.length==R2.length && R1.width==R2.width)
return 1;
else
return 0;
}

int computeArea(Rect R1)
{
return R1.length*R1.width;
}

int findMaxArea(Rect RA[], int N){

int max,temp,i;
max=computeArea(RA[0]);
	for(i=1;i<N;i++){
	if((temp=computeArea(RA[i]))>max)
	max=temp;
	}
return max;
}

void printRect(Rect R1){
printf("the length is %d\n",R1.length);
printf("the width is %d\n",R1.width);
}

