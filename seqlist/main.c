#include "seqlistOps.h"
#include <stdio.h>

int main(){

SeqList sl1;

sl1=createList();

Element e1={3,4},e2={5,6},e3={7,8},e4={9,10};

sl1=insertElement(e1,sl1);
sl1=insertElement(e2,sl1);
sl1=insertElement(e3,sl1);
sl1=insertElement(e4,sl1);
printf("%d\n",sl1.size);
printList(sl1);

Element erem={5,6};

sl1=deleteElement(erem,sl1);
	printf("%d\n",sl1.size);
printList(sl1);

return 0;
}
