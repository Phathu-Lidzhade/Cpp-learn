#include <iostream>

int main() {

  char mathOperator;
  double num1;
  double num2;
  double result;

  std::cout << "***********************CALCULATOR*************************\n";
  std::cout << "\nEnter an operator (+ - * /): ";
  std::cin >> mathOperator;

  std::cout << "\nEnter first number: ";
  std::cin >> num1;

  std::cout << "\nEnter second number: ";
  std::cin >> num2;

  switch (mathOperator){
    case '+':
      result = num1 + num2;
      std::cout << "Result: " << result;
      break;

    case '-':
      result = num1 - num2;
      std::cout << "Result: " << result;
      break;

    case '*':
      result = num1 * num2;
      std::cout << "Result: " << result;
      break;

    case '/':
      result = num1 / num2;
      std::cout << "Result: " << result;
      break;
    
    default:
      std::cout << "Enter a valid operator.";
      break;
  }

  std::cout << "\n\n******************************************************\n";

  return 0;
}