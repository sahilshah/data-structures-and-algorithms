#include <stdio.h>
#include <stdlib.h>

int listsize;
typedef struct _ball Ball;
struct _ball{
	int num;
	int radius;
	char colour;
	int visit;
	Ball *next;
};

typedef struct{
	Ball ball;
	Ball *head;
}Vertex;

typedef Vertex* Graph; 

Graph createGraph();
Graph fillVertices(Graph);
Graph fillEdges(Graph);
void printGraph(Graph);
int depthFirstSearch(Graph,int,int);
