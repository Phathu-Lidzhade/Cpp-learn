#include <iostream>
//For more math function:
#include <cmath>

using text_t = std::string;

int main() {

  double x = 3.14;
  double y = 4;
  double z;

  // Returns the maximum (larger number) and minimum (smaller number) respectfully
  //z = std::max(x, y);
  //z = std::min(x, y);

  //Power function pow(): to raise a base (number) to a given power eg z^2 / z²
  //First number is the base and second is the exponent
  //z = pow(2, 4);

  //Square root function sqrt()
  //z = sqrt(9);

  //Absolute value function: turns negative numbers into positive numbers
  //z = abs(-3);

  //Rounding functions: round(), ceil(), floor()
  //z = round(3.14); //rounds to the nearest whole number
  //z = ceil(3.14); //rounds up to the nearest whole number
  //z = floor(3.14); //rounds down to the nearest whole number

  //More math functions at https://cplusplus.com/reference/cmath/

  std::cout << z;

  return 0;
}