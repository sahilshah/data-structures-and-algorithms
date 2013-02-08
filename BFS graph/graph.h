#include <stdio.h>
#include <stdlib.h>

typedef struct _node node;
typedef node* LINK;
typedef struct{
	LINK head;
	int size;
}queue;
int listsize;	//global
typedef struct _ball Ball;
struct _ball{
	int num;
	int radius;
	char colour;

	Ball *next;
};
typedef struct{
	Ball ball;
	int visit;
	Ball *head;
}Vertex;
typedef Vertex* Graph; 
typedef Vertex Element;
struct _node{
	Element e;
	LINK next;
};

extern Graph createGraph();
extern Graph fillVertices(Graph);
extern Graph fillEdges(Graph);
extern void printGraph(Graph);
extern int depthFirstSearch(Graph,int,int);

extern queue init(queue q);
extern void addNode(queue* q, LINK e);
extern LINK getHead(queue *q);

