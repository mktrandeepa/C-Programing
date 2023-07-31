//3)
#include <stdio.h>
#include <stdlib.h>
int main()
{
int age,birthyear;
char name[20];
double height;
printf("Enter your name-");
scanf("%s",&name);
printf("Enter your birth year-");
scanf("%d",&birthyear);
printf("enter your age-");
scanf("%d",&age);
printf("enter your height-");
scanf("%lf",&height);
printf("hi %s\n",name);
printf ("%d\n",birthyear);
printf("%d\n",age);
printf("%lf",height);
return 0;
}
