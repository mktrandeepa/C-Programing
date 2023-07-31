//3.
#include <stdio.h>
#include <stdlib.h>
int main()
{
 float r;
 int option;
 printf("Enter the radius of the circle-");
 scanf("%f",&r);
 printf("1.Circumference of the circle\n2.Area of the
circle\n3.volume of a sphere\n");
 scanf("%d",&option);
 switch (option)
 {
 case 1:printf("%.2f",2*3.14*r);break;
 case 2:printf("%.2f",3.14*r*r);break;
 case 3:printf("%.2f",(4/3)*3.14*r*r*r);break;
 default:printf("invalid input");
 }
 return 0;
}
