//11.
#include <stdio.h>
int main() {
 int no, i, f = 0;
 printf("Enter a positive integer: ");
 scanf("%d", &no);
 if (no == 0 || no == 1)
 f= 1;
 for (i = 2; i <= no / 2; ++i) {
 if (no % i == 0) {
 f = 1;
 break;
 }
 }
 if (f == 0)
 printf("%d is a prime number.", no);
 else
 printf("%d is not a prime number.", no);
 return 0;
}
