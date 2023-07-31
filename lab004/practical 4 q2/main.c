//2.
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int opr,no1,no2;

printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n")
;
 printf("Choose an option-");
 scanf("%d",&opr);
 printf("Enter a value-");
 scanf("%d",&no1);
 printf("Enter a value-");
 scanf("%d",&no2);
 switch(opr)
 {
 case 1:printf("%d",no1+no2);break;
 case 2:printf("%d",no1-no2);break;
 case 3:printf("%d",no1*no2);break;
 case 4:printf("%d",no1/no2);break;
 default:printf("invalid"); }
 return 0;
}
