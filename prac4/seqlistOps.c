#include <stdio.h>
#include <stdlib.h>
#include "seqlistOps.h"

Store st;
int nextFreeLoc=0;
Boolean createStore(){

st=(Location*)malloc(1000*sizeof(Location));
if(st!=NULL) return TRUE;
else return FALSE;
}

seqList createList(){

SeqList sl;
sl.size=0;
sl.head=nextFreeLoc++;
return sl;
}

Element getElement(int pos, SeqList sl){
int j;
for(j=sl.head;j<pos;j=st[j].next);
return st[j].elem;
}

SeqList insertElement(Element e, SeqList sl){
int j;
for(j=sl.head;st[j].next!=-1;j=st[j].next);
st[j].next=nextFreeLoc++;
st[st[j].next].elem=e;
st[st[j].next].next=-1;
sl.size++;
return sl;
}

void deleteElement (Element e, SeqList sl){
int j;
for(j=sl.head;st[j].next!=-1;j=st[j].next){
if ((compare(st[st[j].next].elem,e)){
	st[j].next=st[st[j].next].next;
	sl.size--;
	return sl;
}
}
}











