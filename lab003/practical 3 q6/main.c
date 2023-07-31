//6.
#include <stdio.h>
int main() {
 char uppercaseLetters[] = "ABC";
 char lowercaseLetters[] = "abc";
 char digits[] = "012";
 char symbols[] = "$*+/ ";

 printf("Integer Equivalents:\n");

 printf("Uppercase Letters:\n");
 for (int i = 0; uppercaseLetters[i] != '\0'; i++) {
 printf("%c: %d\n", uppercaseLetters[i], uppercaseLetters[i]);
 }
 printf("\n");
 printf("Lowercase Letters:\n");
 for (int i = 0; lowercaseLetters[i] != '\0'; i++) {
 printf("%c: %d\n", lowercaseLetters[i], lowercaseLetters[i]);
 }
 printf("\n");
 printf("Digits:\n");
 for (int i = 0; digits[i] != '\0'; i++) {
 printf("%c: %d\n", digits[i], digits[i]);
 }
 printf("\n");
 printf("Symbols:\n");
 for (int i = 0; symbols[i] != '\0'; i++) {
 printf("%c: %d\n", symbols[i], symbols[i]);
 }
 return 0;
}
