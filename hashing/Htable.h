#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define M 100

typedef char key[15];

struct _tuple{
	key id;
	int keyval;
	char name[15];
	struct _tuple *next;
	};

typedef struct _tuple Tuple;

struct _htentry{
	Tuple *head;
	int size;
	};

typedef struct _htentry HTKeyList;
typedef HTKeyList HTable[M];
