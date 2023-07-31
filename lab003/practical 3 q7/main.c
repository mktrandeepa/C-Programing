//7.
#include <stdio.h>
int main() {
 float basicSalary, additionalAllowance = 0, bonusPercentage, sales, bonus,
grossRemuneration;
 int yearsOfService;
 char city;
 printf("Enter basic salary: ");
 scanf("%f", &basicSalary);
 printf("Enter years of service: ");
 scanf("%d", &yearsOfService);
 printf("Enter city (C for Colombo): ");
 scanf(" %c", &city);
 printf("Enter monthly sales: ");
 scanf("%f", &sales);
 if (yearsOfService > 5) {
 additionalAllowance = 0.1 * basicSalary;
 }
 if (city == 'C' || city == 'c') {
 additionalAllowance += 2500;
 }
 if (sales >= 0 && sales <= 25000) {
 bonusPercentage = 0.1;
 } else if (sales > 25000 && sales <= 50000) {
 bonusPercentage = 0.12;
 } else if (sales > 50000) {
 bonusPercentage = 0.15;
 }
 bonus = bonusPercentage * sales;

 grossRemuneration = basicSalary + additionalAllowance + bonus;
 printf("Gross Monthly Remuneration: %.2f\n", grossRemuneration);
 return 0;
}7.
#include <stdio.h>
int main() {
 float basicSalary, additionalAllowance = 0, bonusPercentage, sales, bonus,
grossRemuneration;
 int yearsOfService;
 char city;
 printf("Enter basic salary: ");
 scanf("%f", &basicSalary);
 printf("Enter years of service: ");
 scanf("%d", &yearsOfService);
 printf("Enter city (C for Colombo): ");
 scanf(" %c", &city);
 printf("Enter monthly sales: ");
 scanf("%f", &sales);
 if (yearsOfService > 5) {
 additionalAllowance = 0.1 * basicSalary;
 }
 if (city == 'C' || city == 'c') {
 additionalAllowance += 2500;
 }
 if (sales >= 0 && sales <= 25000) {
 bonusPercentage = 0.1;
 } else if (sales > 25000 && sales <= 50000) {
 bonusPercentage = 0.12;
 } else if (sales > 50000) {
 bonusPercentage = 0.15;
 }
 bonus = bonusPercentage * sales;

 grossRemuneration = basicSalary + additionalAllowance + bonus;
 printf("Gross Monthly Remuneration: %.2f\n", grossRemuneration);
 return 0;
}
