//2.
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int no=0,n=1,total=0;
 float avg=0;
 while(n<=10)
 {
 printf("enter your marks-");
 scanf("%d",&no);
 total=total+no;
 n++;
 }
 avg=(float)total/10;
 if(avg<50)
 printf("Fail");
 else
 printf("Pass");
 return 0;
}
