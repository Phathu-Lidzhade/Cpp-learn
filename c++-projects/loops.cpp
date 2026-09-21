#include <iostream>

int main() {

  // While loop = executes a block of code as long as a specified condition is true
  /*
  std::string name;

  while(name.empty()){
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
  }

  std::cout << "Hello " << name;
  */

  // Do while loop = executes a block of code once, and then repeats the loop as long as a specified condition is true
  /*
  int number;

  do
  {
    std::cout << "Enter a positive number: ";
    std::cin >> number;
  } while (number < 0);
  */

  // For loop = executes a block of code a limited amount of times
  /*
  for(int i = 1; i <= 3; i++){
    std::cout << "Happy new Year\n";
  }
    */

  //break = break out of a loop
  //continue = skip current iteration (in the example it will skip 13 and continue)

  /*
  for(int i = 1; i <= 20; i++){
    if (i == 13)
    {
      break;
    }
    if (i == 13)
    {
      continue;
    }
    
    std::cout << i << '\n';
  }
    */

  //nested loops = a loop inside another loop

  /*
  for (int i = 1; i <= 3; i++)
  {
    for (int j = 1; j <= 10; j++)
    {
      std::cout << j << ' ';
    }
      std::cout << '\n';
  }
  */
  
  int rows;
  int columns;
  char symbol;

  std::cout << "How many rows?: ";
  std::cin >> rows;

  std::cout << "How many columns?: ";
  std::cin >> columns;

  std::cout << "Which symbol to use: ";
  std::cin >> symbol;

  for (int i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= columns; j++)
    {
      std::cout << symbol;
    }
      std::cout << '\n';
  }

  return 0;
}