#include <iostream>

int main() {
  
  // pointers = variables that stores a memory address of another variable
  //            sometimes it's easier to work with an address
  // & address-of operator
  // * dereference operator

  /*
  std::string name = "Phathu";
  int age = 22;
  std::string freePizzas[5] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"};

  std::string *pName = &name;
  int *pAge = &age;
  // arrays are already address no need to use "&"
  //std::string *pFreePizzas &freePizzas;
  std::string *pFreePizzas = freePizzas;

  std::cout << *pName << '\n';
  std::cout << *pAge << '\n';
  std::cout << freePizzas << '\n';
  std::cout << pFreePizzas << '\n';
  std::cout << *pFreePizzas << '\n';
  */

  // Null Pointer(nullptr)
  // Null value = a special value that means something has no value
  //              When a pointer is holding a null value,
  //              that pointer is not pointing at anything (null pointer)

  // nullptr = keyword represents a null pointer literal

  // nullptrs are helpful when determining if an address
  // was successfully assigned to a pointer

  // When using pointers, be careful that your code isn't
  // dereferencing a nullptr or pointing to free memory
  // that will cause undefined behavior

  int *pointer = nullptr;
  int x = 123;

  pointer = &x;

  if (pointer == nullptr)
  {
    std::cout << "Address was not assigned!\n";
  }else
  {
    std::cout << "Address was assigned!\n";
    std::cout << *pointer;
  }
  
  

  return 0;
}