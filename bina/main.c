#include <stdio.h>

int main(){
	int a[]={1,3,5,7,9,11,13,15,17,19,21};
	printf("%d",binarySearch(a,0,10,9));

return 0;
}


int binarySearch(int a[], int low, int high, int element){
	int mid,i,j;
	mid=(high+low)/2;
	if(high==low && a[mid]!=element)
		return -1;
	else if(a[mid]==element)
		return mid;
	else if(element>a[mid])
		low=mid+1;
	else
		high=mid-1;
	return binarySearch(a,low,high,element);
}
