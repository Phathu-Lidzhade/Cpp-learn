#include <iostream>

using text_t = std::string;

int main() {

  // cout << (insertion operator)
  // cin >> (extraction operator)
  // c = character

  text_t name;
  int age;

  //std::cout << "What's your name?: ";
  //std::cin >> name;

  std::cout << "What's your full name?: ";
  //std::getline(std::cin, name);
  // Use (getline) if user is inputing a string with spaces " " or multiple words
  std::getline(std::cin >> std::ws, name);
  // Use (std::ws) to eliminate any new line characters ('\n') or any wide spaces before getting the input
  // Use this if there is any other user inputs lines above this one

  std::cout << "What's your age?: ";
  std::cin >> age;

  std::cout << "Hello " << name << '\n';
  std::cout << "You are " << age << " years old.";

  return 0;
}