//5.
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int no1,no2;
 printf("Enter the 1st number\n");
 scanf("%d",&no1);
 printf("Enter the 2nd number\n");
 scanf("%d",&no2);
 if(no1%no2==0)
 printf("first is a multiple of the second.");
 else
 printf("first is not a multiple of the second.");
 return 0;
}
