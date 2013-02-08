#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct _fruit{
char name[30];
int number;
struct _fruit *next;
};
typedef struct _fruit Fruit;

struct _box{
Fruit *head;
Fruit *tail;
struct _box *next;
int size;
int boxnumber;
};
typedef struct _box Box; 
