//Practical Number 04
//Areas covered Selection control structures
1.Using if else
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int no;
 printf("enter a number- ");
 scanf("%d",&no);
 if (no%2==0)
 printf("Entered number is even");
 else
 printf("Entered number is odd");
 return 0;
}
1.Using switch
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int no,ans;
 printf("enter a number- ");
 scanf("%d",&no);
 ans=no%2;
 switch (ans)
 {
 case 0:printf("even");break;
 default:printf("odd");
 }
 return 0;
}







