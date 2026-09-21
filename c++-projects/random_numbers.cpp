#include <iostream>
#include <ctime>

int main() {
  
  // pseudo-random = NOT truly random (but close)

  /*
  srand(time(NULL));

  int num1 = (rand() % 6) + 1;
  int num2 = (rand() % 6) + 1;
  int num3 = (rand() % 6) + 1;

  std::cout << num1 << '\n';
  std::cout << num2 << '\n';
  std::cout << num3 << '\n';
  */

  // random event generator
  // for this you need to include the ctime method

  /*
  srand(time(0));
  int random = (rand() % 5) +1;

  switch (random)
  {
  case 1:
    std::cout << "You win a bumper sticker!\n";
    break;

  case 2:
    std::cout << "You win a t-shirt!\n";
    break;

  case 3:
    std::cout << "You win a free lunch!\n";
    break;

  case 4:
    std::cout << "You win a gift card!\n";
    break;

  case 5:
    std::cout << "You win concert tickets!\n";
    break;
  
  default:
    break;
  }
    */

  //Number guessing game

  int num;
  int guess;
  int tries = 0;

  srand(time(NULL));
  num = (rand() % 100) +1;

  std::cout << "********** Number Guessing Game ***********\n";
  do
  {
    std::cout << "Enter a guess between (1-100): ";
    std::cin >> guess;
    tries++;

    if (guess > num)
    {
      std::cout << "Too high!\n";
    }
    else if (guess < num)
    {
      std::cout << "Too low!\n";
    }
    else
    {
      std::cout << "CORRECT! # of tries: " << tries << '\n';
    }
    

  } while (guess != num);
  
  std::cout << "***********************************\n";

  return 0;
}