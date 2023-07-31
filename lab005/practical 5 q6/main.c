//06.
#include <stdio.h>
#include <stdlib.h>
int main() {
 int base, exponent;
 long long result = 1;
 printf("Enter the base number: ");
 scanf("%d", &base);
 printf("Enter the exponent: ");
 scanf("%d", &exponent);
 if (exponent >= 0){
 for (int i = 1; i <= exponent; i++)
 {
 result *= base;
 }
 printf("%d to the power of %d is- %d",base,exponent,result);
 }
 else
 {
 printf("Exponent should be a non-negative integer.\n");
 }
 return 0;
}
