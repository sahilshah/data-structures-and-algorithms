#include "stdio.h"
#define N 100
int split ( int*, int, int ) ;
void quicksort ( int *, int, int ) ;

void main( )
{
	FILE *fp;
	int i,size=0;
	char c;
	int a[N];
	fp=fopen("numbers.txt","r");
	while(!feof(fp))
		fscanf(fp,"%d\n",&a[size++]);
	quicksort(a,0,size-1);
	for(i=0;i<size;i++)
		printf("%d\n",a[i]);

}

void quicksort ( int a[ ], int lower, int upper )
{
	int i ;
	if ( upper > lower )
	{
		i = split ( a, lower, upper ) ;
		quicksort ( a, lower, i - 1 ) ;//i is pivot index and pivot is already considered sorted
		quicksort ( a, i + 1, upper ) ;
	}
}

int split ( int a[ ], int lower, int upper )
{
	int i, p, q, t ;
	
	p = lower + 1 ;
	q = upper ;
	i = a[lower] ; //lowest index element taken as pivot
	
	while ( q >= p )
	{
		while ( a[p] <= i )
			p++ ;
		
		while ( a[q] > i )
			q-- ;
		
		if ( q > p ) //exchange if true since sides not changed
		{
			t = a[p] ;
			a[p] = a[q] ;
			a[q] = t ;
		}
	}
	
	t = a[lower] ; //Pivot exchanged with last element of lower partition as that is its position
	a[lower] = a[q] ;
	a[q] = t ;
	
	return q ; //position of pivot returned as that is the split
}
