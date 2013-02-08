#include "element.h"
#define MAX_ELEM 1000

typedef struct{
int next;
Element elem;
} Location;

typedef Location Store[MAX_ELEM];
