#include "Htable.h"
//#define RANDOM 1
//#ifndef RANDOM
extern int getSize(HTable ht, int m);
extern int isEmpty(HTable ht, int m);
extern Tuple findElem(HTable ht, int m, key id);
extern HTKeyList findAllElem(HTable ht, int m, key id);
extern void insertElement(HTable ht, int m, Tuple *elem);
extern int deleteElement(HTable ht, int m, Tuple elem);
extern void removeAllElem(HTable ht, int m, Tuple elem);
extern void printRecord(Tuple *record);
extern void printAllElem(HTable ht, int k);
extern void initialiseHtable(HTable ht, int m);
extern void copyTuple(Tuple *source, Tuple *dest);
//#endif
