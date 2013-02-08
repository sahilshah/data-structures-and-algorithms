#include "graph.h"

int main(){
	Graph g;
	g=createGraph();
	g=fillVertices(g);
	g=fillEdges(g);
	printGraph(g);
	int distance;
	distance=depthFirstSearch(g,0,7);
	printf("distance is %d\n",distance);
	distance=depthFirstSearch(g,7,0);
	printf("distance is %d\n",distance);
	return 0;
}
