#include "graph.h"

void resetFlags(Graph g){
	int i;
	for(i=0;i<listsize;i++)
		g[i].visit=0;
} 

int BFS(Graph g, Vertex *s, Vertex* e){
	queue q;
	LINK temp;
	node x;
	x.e=*s;
	x.next=NULL;
	int count=0;
	Ball* av;
	q=init(q);
	addNode(&q,&s);
	while(!isEmpty(q)){
		temp=q.head;
		g[temp.e->num].visit=1;
		if(temp.e==*e)
			return count;
		av=temp->head;
		while(av!=NULL){
			if(g[av->num].visit!=1)
				addNode(&q,av);
			av=av->next;
		}
		count++;
	}
	return -1;
}
