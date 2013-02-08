#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>
#define N 10000

extern Stack createStack(Stack s);
extern Stack push(Stack s, int a);
extern int pop(Stack *s);
extern int isEmpty(Stack *s);
