#include <iostream>

/*
double getTotal(double prices[], int size) {
  double total = 0;

  for(int i = 0; i < size; i++) {
    total += prices[i];
  }

  return total;
}
*/

int searchArray(int array[], int size, int element) {
  for (int i = 0; i < size; i++)
  {
    if (array[i] == element)
    {
      return i;
    }
  }
  return -1;
  
}

int main() {
  
  /*
  double prices[] = {49.99, 15.05, 75, 9.99, 27.50};
  int size = sizeof(prices)/sizeof(prices[0]);
  double total = getTotal(prices, size);

  std::cout << "R" << total;
  */

  // Searching an array for an element
  // Linear search

  /*
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(numbers)/sizeof(numbers[0]);
  int index;
  int myNum;

  std::cout << "Enter element to search for: \n";
  std::cin >> myNum;

  index = searchArray(numbers, size, myNum);

  if (index != -1)
  {
    std::cout << myNum << " is at index " << index;
  }
  else
  {
    std::cout << myNum << " is at not in the array";
  }
    */

  // Sorting an array
  // Bobble sort
  

  return 0;
}