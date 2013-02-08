#include "bankaccountOps.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

	Account *ptr;
	ptr=(Account*)malloc(sizeof(Account));
	
	createAccount(ptr);
	showBal(ptr);

return 0;
}
