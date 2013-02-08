typedef struct _stacknode *StackLink;
typedef struct _stacknode
{
	int element;
	StackLink next;
} StackNode;

typedef struct
{
	StackLink head;
	int size;
} Stack;
