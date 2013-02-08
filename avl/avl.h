#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct _node{
	int key;
	struct _node *left;
	struct _node *right;
};

typedef struct _node Node;
typedef Node* LINK;

