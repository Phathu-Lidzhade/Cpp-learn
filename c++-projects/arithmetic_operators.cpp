#include <iostream>

int main(){

  // Arithmetic Operators returns the results of (+ - * /)

  int students = 20;
  // Addition
  //students = students + 1;
  //students += 1;
  //students++;

  // Subtraction
  //students = students - 1;
  //students -= 1;
  //students--;

  // Multiplication
  //students = students * 2;
  //students *= 2;

  // Division
  //students = students / 3;
  //students /= 3;

  // Modulus
  //int remainder = students % 3;

  //students = 6 - 5 + 4 * 3 / 2;


  //std::cout << students;

  // type conversion = changing a value of one data type to another data type
  //                   Implicit = automatic
  //                   Explicit = Precede value with new data type eg (int) x

  //int x = 3.14;
  //double x = (int) 3.14;

  //std::cout << x;

  //char x = 100;
  //std::cout << (char)100;

  int correct = 8;
  int questions = 10;
  double score = correct/(double)questions * 100;

  std::cout << score << "%";

  return 0;
}