#include "seqlistOps.h"
#include <stdio.h>
int nextFreeLoc=0;
Store st;

int compare(Element e1, Element e2){

if(e1.x==e2.x && e1.y==e2.y)
return 1;
else return 0;
}


SeqList createList(){

SeqList sl;
sl.size=0;
sl.head=nextFreeLoc++;
st[sl.head].next=-1;
return sl;
}

Element getElement(int pos, SeqList sl){

int j,count=0;
for(j=sl.head;count<pos;j=st[j].next,count++);
return st[j].elem;
}

SeqList insertElement(Element e, SeqList sl){
int j;
for(j=sl.head;st[j].next!=-1;j=st[j].next);
st[j].next=nextFreeLoc++;
st[j].elem=e;
st[st[j].next].next=-1;
sl.size++;
return sl;
}

SeqList deleteElement (Element e, SeqList sl)
{
int j;
for(j=sl.head;st[j].next!=-1;j=st[j].next){
	if(compare(st[st[j].next].elem,e)==1){
		st[j].next=st[st[j].next].next;
		sl.size--;
		break;
		}
}
return sl;
}

void printList(SeqList sl){
int j;
for(j=sl.head; st[j].next!=-1; j=st[j].next)
{
printf("%d %d\n",st[j].elem.x,st[j].elem.y);
}
}






