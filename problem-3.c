#include <stdio.h>

int main() {
  char a;
  int b;

  printf("Enter any character: ");
  scanf("%c", &a);

  b = (int)a; // Explicit cast from char to int
  printf("The ASCII code is: %d\n", b);

  int num;
  printf("Enter any ASCII number: ");
  scanf("%d", &num);
  
  char c = (char)num; // Explicit cast from int to char
  printf("The character is: %c\n", c);
}