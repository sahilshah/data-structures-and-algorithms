#include "bankaccount.h"
#include <stdio.h>
#include <string.h>
void createAccount(Account *acc){

printf("enter the holder's name: ");
scanf("%s",acc->holder);
printf("enter the account no: ");
scanf("%d",&acc->number);
printf("enter the amount: ");
scanf("%f",&acc->balance);
printf("enter the type of account: ");
scanf("%d",&acc->type);

}

void showBal(Account *acc){

printf("the account no is %d\nthe account balance is %f\nthe account type is %d",acc->number,acc->balance,acc->type);
printf("the account holder is %s",acc->holder);
}
