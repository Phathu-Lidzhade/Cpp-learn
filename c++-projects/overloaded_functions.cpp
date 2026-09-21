#include <iostream>

using text_t = std::string;

void makePizza() {
  std::cout << "Here is your pizza!\n";
}
void makePizza(text_t topping1) {
  std::cout << "Here is your " << topping1 << " pizza!\n";
}
void makePizza(text_t topping1, text_t topping2) {
  std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}

int main() {
  //overloaded functions = different versions of the same function
  
  makePizza("mushroom", "pepperoni");

  return 0;
}