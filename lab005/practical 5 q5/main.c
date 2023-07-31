
//05.
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int number,digit,reversedno=0;
 printf("Enter the number-\n");
 scanf("%d",&number);
 do
 {
 digit=number%10;
 reversedno=reversedno*10+digit;
 number=number/10;
 }
 while (number!=0);
 printf("%d",reversedno);
 return 0;
}
