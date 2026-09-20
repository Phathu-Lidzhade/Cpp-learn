#include <iostream>

int main() {
  // This is a comment
  /*
    This 
    is 
    a 
    multi-line 
    comment
  */

  std::cout << "I like pizza!" << '\n';
  std::cout << "It's really good!" << '\n';

  // Variables

  //Integers
  int x;
  x = 10;

  int y = 5;
  int sum = x + y;

  //Characters
  char grade = 'A';
  char initial = 'P';

  //Booleans (true or false)
  bool student = false;
  bool power = true;

  //Strings
  std::string name = "Phathu";

  //Const (a variable that does change)
  const int LIGHT_SPEED = 299792458;
  const double PI = 3.14159;
  double radius = 10;
  double circumference = 2 * PI * radius;



  std::cout << x << '\n';
  std::cout << y << '\n';
  std::cout << sum << '\n';

  std::cout << initial << '\n';

  std::cout << name << '\n';
  std::cout << "Hello " << name << '\n';
  std::cout << "The sum is " << sum << " very exciting!" << '\n';

  std::cout << circumference << '\n';

  return 0;
}