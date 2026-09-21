#include <iostream>

int myNum = 3;

/*
void printNum(int myNum) {
  std::cout << myNum;
}
  */

  /*
void printNum() {
  int myNum = 2;
  std::cout << myNum;
}
  */
 void printNum() {
  std::cout << myNum << '\n';
}

int main() {
  
  // Local variables = declared inside a function or block {}
  // Global variables = declared outside of all functions
  //                    use :: to force use the global variable

  int myNum = 1;

  //std::cout << myNum;
  //printNum();
  printNum();
  std::cout << ::myNum;

  return 0;
}