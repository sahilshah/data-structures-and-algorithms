#include "graph.h"
	static int found=0;

void resetFlags(Graph g){
	int i;
	for(i=0;i<listsize;i++)
		g[i].ball.visit=0;
} 

void resetFound(){
	found=0;
}

int DFS(Graph g, Vertex *s, Vertex e){
	int count=0;
	s->ball.visit=1;
	int label=s->ball.num;
	Ball *temp;
	temp=s->head;
	while(temp!=NULL){
		if(temp->num==e.ball.num){
			found=1;
			return 0;
		}
		else if(g[temp->num].ball.visit==0){
			count=1+DFS(g,&g[temp->num],e);
			if (found==1)
				return count;
			}
		temp=temp->next;
	}
	return -1;
}

int depthFirstSearch(Graph g, int s, int e){
	int d;
	resetFound();	//resets the found universal flag
	resetFlags(g);	//resets the graph flags for visit
	d=DFS(g,&g[s],g[e]);
	return d;
}
