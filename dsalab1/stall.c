#include "StockOps.h"

int main(){

FILE *fp;
fp=fopen("boxes.rtf","r");
Stock *stock=initializeStock(fp);

return 0;
}
