#include <iostream>

int main() {
  
  std::string name;

  std::cout << "Enter your name: ";
  std::getline(std::cin, name);

  if(name.length() > 12){ // Check if the string length is greater than 12
    std::cout << "Your name can't be more than 12 characters.\n";
  }
  else
  {
    std::cout << "Welcome " << name;
  }

  //name.empty(); // Check if the string is empty
  //name.clear(); // Clear the string
  //name.append("@gmail.com"); // Append a string to the end of the string
  //std::cout << "\nYour email is: " << name;
  //name.at(0); // Access the first character of the string
  //std::cout << name.at(0);
  //name.insert(0, "Hello "); // Insert a string at the beginning of the string
  //name.find("a"); // Find the first occurrence of a character in the string
  //std::cout << name.find("a");
  //name.erase(0, 5); // Erase the first 5 characters of the string
  //std::cout << "\nYour name is: " << name;

  //for more string methods, visit: https://cplusplus.com/reference/string/string

  return 0;
}