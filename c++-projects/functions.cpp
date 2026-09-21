#include <iostream>

using text_t = std::string;

void happyBirthday(std::string name, int age) {
  std::cout << "Happy birthday to " << name << '\n';
  std::cout << "Happy birthday to " << name << '\n';
  std::cout << "Happy birthday dear " << name << '\n';
  std::cout << "Happy birthday to " << name << '\n';
  std::cout << "You are " << age << " years old!\n";
}

double square(double length) {
  double result = length * length;
  
  return result;
}

double cube(double length){
  return length * length * length;
}

text_t concatString (text_t string1, text_t string2){
  return string1 + " " + string2;
}

int main() {
  
  //function = a block of reusable code

  //return functions = return a value back to the spot
  //                   where you called the encompassing function

  /*
  std::string name = "Phathu";
  int age = 22;

  happyBirthday(name, age);
  */

  /*
  double length = 6.0;
  double area = square(length);

  double volume = cube(length);

  std::cout << "Area: " << area << "cm^2\n";
  std::cout << "Volume: " << volume << "cm^3\n";
  */

  text_t firstName = "Phathu";
  text_t lastName = "Lidzhade";
  text_t fullName = concatString(firstName, lastName);

  std::cout << "Hello " << fullName;

  return 0;
}