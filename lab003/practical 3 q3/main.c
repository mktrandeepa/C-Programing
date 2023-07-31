//3.
#include <stdio.h>
#include <stdlib.h>
int main()
{
 char empln[20];
 float newsl,basicsl,inc;
 printf("Enter your name- ");
 scanf("%s",&empln);
 printf("Enter your basic salary-");
 scanf("%f",&basicsl);
 if (basicsl>=10000)
 inc=0.15;
 else if(basicsl<5000)
 inc=0.1;
 else
 inc=0.05;
 newsl=basicsl*inc;
 printf("%f",newsl);
 return 0;
}
