#include <iostream>

int main() {
  //logical operators = used to connect two or more expressions
  //                    && (and) both conditions must be true
  //                    || (or) either condition must be true
  //                    ! (not) reverses the boolean state of the condition

  /*
  int temp;
  bool sunny = false;

  std::cout << "Enter the temperature: ";
  std::cin >> temp;

  /*
  if (temp > 0 && temp < 30)
  {
    std::cout << "The temperature is good";
  }
  else
  {
    std::cout << "The temperature is bad";
  }
    
  
  if (temp <= 0 || temp >= 30)
  {
    std::cout << "The temperature is bad";
  }
  else
  {
    std::cout << "The temperature is good";
  }

  if (!sunny)
  {
    std::cout << "\nIt is cloudy outside";
  }
  else
  {
    std::cout << "\nIt is sunny outside";
  }
  */

  double temp;
  char unit;

  std::cout << "************ Temperature Converter ************\n";
  std::cout << "F = Fahrenheit\n";
  std::cout << "C = Celsius\n";
  std::cout << "What is the unit of the temperature? (F/C): ";
  std::cin >> unit;

  if (unit == 'F' || unit == 'f')
  {
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> temp;

    temp = (1.8 * temp) + 32.0;
    std::cout << "Temperature is: " << temp << "F\n";
  }
  else if (unit == 'C' || unit == 'c')
  {
    std::cout << "Enter the temperature in Fahrenheit: ";
    std::cin >> temp;

    temp = (temp - 32.0) /1.8;
    std::cout << "Temperature is: " << temp << "C\n";
  }
  else
  {
    std::cout << "Please enter only F or C\n";
  }
  

  std::cout << "***********************************";

  return 0;
}