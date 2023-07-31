//Practical Number 01


//1)
#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("Pabashi Fernando\n");
printf("Carmel Girls");
return 0;
}


//2)
#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("*\n");
printf("**\n");
printf("***\n");
 printf("****\n");
printf("*****\n");
return 0;
}

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

//4)
#include <stdio.h>
int main()
{

int no1,no2,total;

printf("Enter first Number ");
scanf("%d",&no1);
printf("Enter second Number ");
scanf("%d",&no2);

total=no1+no2;

printf("The total is %d",total);
}



//5)
#include <stdlib.h>
int main()
{
float no1,no2,avg;
printf("enter first number");
scanf("%f",&no1);
printf("enter second number");
scanf("%f",&no2);
avg=(no1+no2)/2;
printf("average is %f",avg);
}


//6)
#include <stdio.h>
int main()
{
int birthyear,age;
char name[20];
printf("hi,please enter your Name and Birth year ");
scanf("%s",&name);
scanf("%d",&birthyear);
age=(2023-birthyear);
printf("Your name is %s\n",name);
printf("your age is %d",age);
}


//7)
#include <stdio.h>
#include <stdlib.h>
int main()
{
int no1,no2,temp;
printf("enter first number-");
scanf("%d",&no1);
printf("enter second number-");
scanf("%d",&no2);
temp=no1;
no1=no2;
no2=temp;
printf("now the no1 value is =%d\n")
}
