#include <iostream>

int main() {
  //if statements = do something if a condition is true
  //                if not, then don't do it.

  /*
  int age;

  std::cout << "Enter your age: ";
  std::cin >> age;

  if (age >= 100){
    std::cout << "You are too old to enter this site.";
  }
  else if (age < 0){
    std::cout << "You haven't been born yet!";
  }
  else if (age >= 18){
    std::cout << "Welcome to the site!";
  }
  else{
    std::cout << "Sorry, you are not old enough to enter this site.";
  }
  */

  //switch statements = an alternative to using many "else if" statements
  //                    compare one value against matching cases

  int month;

  //std::cout << "Enter the month (1-12): ";
  //std::cin >> month;
  
  switch (month)
  {
  case 1:
    std::cout << "It is January";
    break;
  
  case 2:
    std::cout << "It is February";
    break;

  case 3:
    std::cout << "It is March";
    break;

  case 4:
    std::cout << "It is April";
    break;

  case 5:
    std::cout << "It is May";
    break;

  case 6:
    std::cout << "It is June";
    break;

  case 7:
    std::cout << "It is July";
    break;

  case 8:
    std::cout << "It is August";
    break;

  case 9:
    std::cout << "It is September";
    break;

  case 10:
    std::cout << "It is October";
    break;

  case 11:
    std::cout << "It is November";
    break;

  case 12:
    std::cout << "It is December";
    break;
  
  default:
    std::cout << "Please enter only numbers (1-12)";
    break;
  }

  char grade;

  std::cout << "Enter your grade (A-F): ";
  std::cin >> grade;

  switch (grade)
  {
  case 'A':
    std::cout << "You did great";
    break;

  case 'B':
    std::cout << "You did good";
    break;

  case 'C':
    std::cout << "You did okay";
    break;

  case 'D':
    std::cout << "You did not do good";
    break;

  case 'F':
    std::cout << "You failed";
    break;
  
  default:
    std::cout << "Please only enter a latter grade (A-F)";
    break;
  }

  return 0;
}