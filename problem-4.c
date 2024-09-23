#include <stdio.h>

int main() {
  int num1, num2; // variable declaration

  printf("Enter two numbers: ");
  scanf(" %d %d", &num1, &num2); // input

  char operation;
  int ans = 0;
  printf("Enter the operation you want to perform (+, -, *, /): ");
  scanf(" %c", &operation);

  if (operation == '+') {
    ans = num1 + num2;
    printf("The sum of %d and %d is %d", num1, num2, ans);
  } else if (operation == '-') {
    ans = num1 - num2;
    printf("The difference of %d and %d is %d", num1, num2, ans);
  } else if (operation == '*') {
    ans = num1 * num2;
    printf("The multiplication of %d and %d is %d", num1, num2, ans);
  } else if (operation == '/') {
    ans = num1 / num2;
    printf("The division of %d and %d is %d", num1, num2, ans);
  } else {
    printf("Error! operator is not correct");
  }
}