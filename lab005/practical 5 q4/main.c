//4.
#include <stdio.h>
#include <stdlib.h>
int main()
{
int num,digit,sum=0;
printf(“Enter a number : “);
scanf(“%d”,&num);
while(num>0)
{
digit=num%10;
sum+=digit;
num/=10;
}
printf(“sum of digits: %d\n”,sum);
}
