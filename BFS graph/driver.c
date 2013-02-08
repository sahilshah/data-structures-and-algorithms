#include "graph.h"

int main(){
	Graph g;
	g=createGraph();
	g=fillVertices(g);
	g=fillEdges(g);
	printGraph(g);
	int distance;
	distance=BFS(g,g,g+4);
	printf("distance is %d\n",distance);
	distance=BFS(g,g+4,g);
	printf("distance is %d\n",distance);
	return 0;
}
