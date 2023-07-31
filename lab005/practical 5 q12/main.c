//12.
#include <stdio.h>
int main() {
 int num, i;
 printf("Enter an integer: ");
 scanf("%d", &num);
 printf("Factors of %d are: ", num);
 for (i = 1; i <= num; ++i) {
 if (num % i == 0) {
 printf("%d ", i);
 }
 }
 return 0;
}
//12.
#include <stdio.h>
int main()
{
 int number,sum=0;
 printf("Enter -1 to exit from the loop:\n");
 while (1)
 {
 printf("Enter a number: ");
 scanf("%d", &number);
 sum=sum+number;
 if (number == -1)
 {
 printf("%d",sum);
 break;
 }
 }
 return 0;
}
