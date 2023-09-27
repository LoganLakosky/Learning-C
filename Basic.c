#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>



int checkOperatorType(int operator) {
  if (operator != '+' && operator != '-' && operator != '/' && operator != '*') {
    printf("\nInvalid operator. Please try again\n");

    return 0;
  }

  return 1;
}


char reTakeUserInput() {
  char newOperator;
  printf("Please enter either +, -, / or *\n");
  scanf(" %c", &newOperator);
  return newOperator;
}

int main() {
  char operator;
  double num1;
  double num2;
  double result;

  printf("Enter the operator: ");
  scanf("%c", &operator);
  while (getchar() != '\n')
    continue;

  if (!checkOperatorType(operator)) {
    const char tmpOperator = reTakeUserInput();

    if (!checkOperatorType(tmpOperator)) {
      printf("Stop breaking my program please.");
      return 0;
    }

    operator = tmpOperator;

  }



  printf("Enter the first number: ");
  scanf("%lf", &num1);

  printf("Enter the second number: ");
  scanf("%lf", &num2);

  switch (operator) {
  case '+': {
    result = num1 + num2;
    printf("The result is: %.1lf", result);
    break;
  } case '-': {
    result = num1 - num2;
    printf("The result is: %.1lf", result);
    break;
  }
  case '/': {
    result = num1 / num2;
    printf("The result is %.1lf", result);
    break;
  }
  case '*': {
    result = num1 * num2;
    printf("The result is %lf", result);
    break;
  }

  default: {
    printf("The operator you have entered is invalid please try again");
  }
  }


  return 0;
}
