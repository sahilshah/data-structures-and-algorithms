#include "graph.h"

Graph createGraph(){
	Graph g;
	g=NULL;
	return g;
}

Ball createBall(char c, int r, int n){
	Ball b;
	b.radius=r;
	b.colour=c;
	b.next=NULL;
	b.num=n;
	return b;	
}

Graph fillVertices(Graph g){
	FILE *fp;
	int i,r,nodes;
	char c;
	Ball ball;
	fp=fopen("nodes.txt","r");
	fscanf(fp,"%d\n",&nodes);
	listsize=nodes;
	g=(Graph)malloc(nodes*sizeof(Vertex));
	for(i=0;i<nodes;i++){
		fscanf(fp,"%c %d\n",&c,&r);
		ball=createBall(c,r,i);
		g[i].visit=0;
		g[i].ball=ball;
		g[i].head=NULL;
	}
	fclose(fp);
	return g;
}

Vertex* findVertex(Graph g, int r, char c){
	int i;
	for(i=0;i<listsize;i++){
		if(r==g[i].ball.radius && c==g[i].ball.colour)
			return &g[i];
	}
}

Graph fillEdges(Graph g){
	FILE *fp;
	int r1,r2,i;
	char c1,c2;
	Vertex *v1,*v2;
	Ball *b1,*b2;
	fp=fopen("input.txt","r");

	while(!feof(fp)){
		fscanf(fp,"%c%d %c%d\n",&c1,&r1,&c2,&r2);
		v1=findVertex(g,r1,c1);
		v2=findVertex(g,r2,c2);
		b1=(Ball*)malloc(sizeof(Ball));
		b2=(Ball*)malloc(sizeof(Ball));
		*b1=v1->ball;
		*b2=v2->ball;
		b2->next=v1->head;
		b1->next=v2->head;
		v1->head=b2;
		v2->head=b1;
		//printf("%d %d %c %u\n",v1->head->num,v1->head->radius,v1->head->colour,v1->head->next);
		//printf("%d %d %c %u\n",v2->head->num,v2->head->radius,v2->head->colour,v2->head->next);
	}
	fclose(fp);
	return g;
}

void printGraph(Graph g){
	int i;
	Ball *temp;
	for(i=0;i<listsize;i++){
		printf("start=%d(%c%d)",g[i].ball.num,g[i].ball.colour,g[i].ball.radius);
		temp=g[i].head;
		while(temp!=NULL){
			printf("-->%d(%c%d)",temp->num,temp->colour,temp->radius);
			temp=temp->next;
		}
		printf("\n");
	}
}

