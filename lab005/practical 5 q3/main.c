//3.
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int fac,i,ans;
 printf("Enter a number-");
 scanf("%d",&fac);
 for(i=1;i<=fac;i++)
 {
 ans=ans*i;
 }
 printf("%d",ans);
 return 0;
}
