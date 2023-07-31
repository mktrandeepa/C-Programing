//Section B
//1.
int main() {
 int size = 10;
 int array[size];
 printf("Enter %d numbers:\n", size);
 for (int i = 0; i < size; i++) {
 scanf("%d", &array[i]);
 }
 int positiveCount = 0;
 int negativeCount = 0;
 int zeroCount = 0;
 for (int i = 0; i < size; i++) {
 if (array[i] > 0) {
 positiveCount++;
 } else if (array[i] < 0) {
 negativeCount++;
 } else {
 zeroCount++;
 }
 }
 printf("Positive numbers count: %d\n", positiveCount);
 printf("Negative numbers count: %d\n", negativeCount);
 printf("Zero count: %d\n", zeroCount);
 return 0;
}

//2.
#include <stdio.h>
int main() {
 int size = 10;
 int marks[size];
 printf("Enter marks of %d students:\n", size);
 for (int i = 0; i < size; i++) {
 scanf("%d", &marks[i]);
 }
 int maxMark = marks[0];
 int minMark = marks[0];
 int sum = marks[0];
 for (int i = 1; i < size; i++) {
 if (marks[i] > maxMark) {
 maxMark = marks[i];
 }
 if (marks[i] < minMark) {
 minMark = marks[i];
 }
 sum += marks[i];
 }
 double average = (double)sum / size;
 printf("Maximum mark: %d\n", maxMark);
 printf("Minimum mark: %d\n", minMark);
 printf("Average mark: %.2f\n", average);
 return 0;
}

//3.
#include <stdio.h>
int main() {
int i,counter=0;
float price,sum=0,avg;
for(i=0;i<10;i++)
{
printf("Enter price of %d item : ",i+1);
scanf("%f",&price);
sum=sum+price;
if(price>200)
counter++;
}
avg=sum/10;
printf("\nThe average value of an item : %.2f\n",avg);
printf("Number of items which the price is greater than 200
:%d\n",counter);
return 0;
}

//4.
#include <stdio.h>
int main() {
 int employeeNo;
 float basicSalary;
 int count = 0;
 printf("Enter the employee number and basic salary (Enter -999 to
stop):\n");
 while (1) {
 printf("Employee No: ");
 scanf("%d", &employeeNo);
 if (employeeNo == -999) {
 break;
 }
 printf("Basic Salary: ");
 scanf("%f", &basicSalary);
 if (basicSalary >= 5000.0) {
 count++;
 }
 }
 printf("Number of employees with a basic salary >= 5000: %d\n",
count);
 return 0;
}

//5.
#include <stdio.h>
int main() {
 int employeeNo;
 int hoursWorked;
 int overtimeRate = 150;
 int overtimeRateExcess = 200;
 int count = 0;
 int countExceeding4000 = 0;
 printf("Enter the employee number and hours worked (Enter -999 to
stop):\n");
 while (1) {
 printf("Employee No: ");
 scanf("%d", &employeeNo);
 if (employeeNo == -999) {
 break;
 }
 printf("Hours Worked: ");
 scanf("%d", &hoursWorked);
 int overtimeHours = hoursWorked - 40;
 int overtimePayment = 0;
 if (overtimeHours > 0) {
 overtimePayment = (overtimeHours * overtimeRate) +
(overtimeHours * overtimeRateExcess);
 }
 printf("Employee No: %d\n", employeeNo);
 printf("Overtime Payment: Rs. %d\n", overtimePayment);
 if (overtimePayment > 4000) {
 countExceeding4000++;
 }
 count++;
 }
 float percentageExceeding4000 = (float)countExceeding4000 / count
* 100;
 printf("Percentage of employees whose overtime payment exceeds Rs.
4000: %.2f%%\n", percentageExceeding4000);
 return 0; }
