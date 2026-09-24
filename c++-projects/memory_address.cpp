#include <iostream>

void swap(std::string &x, std::string &y){
  std::string temp;

  temp = x;
  x = y;
  y = temp;

}

void printInfo(const std::string &name, const int &age){
  // Tring to change the values:
  name = " ";
  age = 0;

  std::cout << name << '\n';
  std::cout << age << '\n';
}

int main() {
  
  // memory address = a location in memory where data is stored
  // a memory address can be accessed with "&" (address-of operator)

  /*
  std::string name = "Phathu";
  int age = 21;
  bool student = false;

  std::cout << &name << '\n';
  std::cout << &age << '\n';
  std::cout << &student << '\n';
  */

  // pass by value = creates a local copy of the variable, so changes inside the function do not affect the original
  // pass by reference = allows a function to directly modify the original variable instead of working with a copy
  //                     using "&" (address-of operator)

  /*
  std::string x = "Kool-Aid";
  std::string y = "Water";

  swap(x, y);

  std::cout << "X: " << x << '\n';
  std::cout << "Y: " << y << '\n';
  */

  // const parameter = a parameter that is effectively read-only
  //                   the code is more secure and it conveys intent
  //                   it is useful for references and pointers

  std::string name = "Phathu";
  int age = 22;

  printInfo(name, age);

  return 0;
}