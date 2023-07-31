//07.
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i,no3,no2=1,no1=0;
 printf("first ten fibonacci nos-\n");
 printf("%d %d",no1,no2);
 for (i=3;i<=10;i++)
 {
 no3=no2+no1;
 printf("% d",no3);
 no1=no2;
 no2=no3;
 }
 return 0;
}
