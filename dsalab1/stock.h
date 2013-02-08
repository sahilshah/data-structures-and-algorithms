#include "box.h"

struct _stock{
Box *head;
Box *tail;
int size;
};

typedef struct _stock Stock;

struct _inventory{
Fruit *head;
int size;
};

typedef struct _inventory Inventory;

