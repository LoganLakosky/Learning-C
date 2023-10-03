#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int addition(int num1, int num2) {
  return num1 + num2;
}

int subtraction(int num1, int num2) {
  return num1 - num2;
}


int multiplication(int num1, int num2) {
  return num1 * num2;
}

float division(float num1, float num2) {
  return num1 / num2;
}



int main() {

  int num1;
  int num2;
  char operation;


  printf("What operation do you want to perform: ");
  scanf("%c", &operation);

  printf("What do you want your first number to be: ");
  scanf("%d", &num1);

  printf("What do you want your second number to be: ");
  scanf("%d", &num2);


  if (operation == '+') {
    printf("Your final result is: %d", addition(num1, num2));
  }
  else if (operation == '-') {
    printf("Your final result is: %d", subtraction(num1, num2));
  }
  else if (operation == '*') {
    printf("Your final result is: %d", multiplication(num1, num2));
  }
  else if (operation == '/') {
    printf("Your final result is: %.2f", division(num1, num2));
  }

  return 0;
}
