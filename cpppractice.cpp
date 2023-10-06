#include <iostream>
#include <vector>
#include <cmath>

using std::vector;
using std::string;
using std::cout;
using std::pair;
using std::cin;
using std::getline;



double addition(double num1, double num2) {
  const double RESULT = num1 + num2;
  return RESULT;
}

double subtraction(double num1, double num2) {
  const double RESULT = num1 - num2;
  return RESULT;
}

double multiplication(double num1, double num2) {
  const double RESULT = num1 * num2;
  return RESULT;
}

double division(double num1, double num2) {
  const double RESULT = num1 / num2;
  return RESULT;
}



int main() {

  char operation;
  double num1;
  double num2;
  double result;

  cout << "What operation would you like: (A, B, C, D) ";
  cin >> operation;

  cout << "What would you like number 1 to be?: ";
  cin >> num1;

  cout << "What would you like number 2 to be?: ";
  cin >> num2;


  const char lowerCaseOperation = tolower(operation);
  switch (lowerCaseOperation) {

  case 'a':
    result = addition(num1, num2);

    cout << "Final result: " << result;
    break;

  case 'b':
    result = subtraction(num1, num2);
    cout << "Final result: " << result;
    break;

  case 'c':
    result = multiplication(num1, num2);
    cout << "Final result: " << result;
    break;

  case 'd':
    result = division(num1, num2);
    cout << "Final result: " << result;
    break;


  default:
    cout << "Please enter in either A, B, C or D";
  }

  return 0;
}



