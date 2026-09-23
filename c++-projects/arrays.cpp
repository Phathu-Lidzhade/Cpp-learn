#include <iostream>

int main() {
  
  // Array = a data structure that can hold multiple values
  //         values are accessed by an index number
  //         "kinda like a variable that holds multiple values"

  /*
  std::string cars[3];

  cars[0] = {"Camry"};
  cars[1] = {"Mustang"};
  cars[2] = {"BMW"};

  std::cout << cars[0] << '\n';
  std::cout << cars[1] << '\n';
  std::cout << cars[2] << '\n';

  double prices[] = {5.00, 7.50, 6.30, 9.99};

  std::cout << prices[0] << '\n';
  std::cout << prices[1] << '\n';
  std::cout << prices[2] << '\n';
  std::cout << prices[3] << '\n';
  */

  // sizeof() = determines the size in bytes of a: variable,
  //            data type, class, object, etc.

  /*
  double gpa = 2.5;
  std::string name = "Phathu";
  char grade = 'F';
  bool student = true;
  char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};

  std::string students[] = {"Phathu", "Spongebob", "Patrick", "Sandy"};


  std::cout << sizeof(gpa) << " bytes\n";
  std::cout << sizeof(name) << " bytes\n";
  std::cout << sizeof(grade) << " bytes\n";
  std::cout << sizeof(student) << " bytes\n";
  std::cout << sizeof(grades) << " bytes\n";
  std::cout << sizeof(students) << " bytes\n";

  //std::cout << sizeof(grades)/sizeof(grades[0]) << " elements\n";
  std::cout << sizeof(grades)/sizeof(char) << " elements\n";

  std::cout << sizeof(students)/sizeof(std::string) << " elements\n";
  */

  // iteration = going through an array using loops

  /*
  std::string students[] = {"Phathu", "Spongebob", "Patrick", "Sandy"};

  for (int i = 0; i < sizeof(students)/sizeof(std::string); i++)
  {
    std::cout << students[i] << '\n';
  }
    */

  // foreach loop = a loop that eases the traversal over an iterable data set
  //                for every student in students[] print student

  std::string students[] = {"Phathu", "Spongebob", "Patrick", "Sandy"};

  for (std::string student : students)
  {
    std::cout << student << '\n';
  }

  return 0;
}