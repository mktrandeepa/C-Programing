
//13.
#include <stdio.h>
int main() {
 int size = 10;
 int array[size];
 printf("Enter %d numbers:\n", size);
 for (int i = 0; i < size; i++) {
 scanf("%d", &array[i]);
 }
 printf("The array elements are: ");
 for (int i = 0; i < size; i++) {
 printf("%d ", array[i]);
 }
 printf("\n");
 return 0;
}
//14.
#include <stdio.h>
int main() {
 int size = 10;
 int array[size];
 printf("Enter %d numbers:\n", size);
 for (int i = 0; i < size; i++) {
 scanf("%d", &array[i]);
 }
 int evenCount = 0;
 for (int i = 0; i < size; i++) {
 if (array[i] % 2 == 0) {
 evenCount++;
 }
 }
 printf("The count of even numbers: %d\n", evenCount);
 return 0;
}
