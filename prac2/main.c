#include <stdio.h>
#include "rectangleOps.h"

void main(){

int i,n;
scanf("%d",&n);
Rect r[n];
for (i=0; i<n; i++){

r[i]=createRect();
r[i]=getData(r[i]);
printRect(r[i]);
printf("\n");
printf("Is this rectange a Square?\n(1 for YES, 0 for NO): %d",isSquare(r[i]));
printf("\narea is %d",computeArea(r[i]));
}

int maxarea;
maxarea=findMaxArea(r,n);
printf("\n the max area is %d\n",maxarea);

}
