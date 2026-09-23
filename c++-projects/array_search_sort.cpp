#include <iostream>

/*
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
  */
  

void sortArray(int array[], int size) {
  int temp;

  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        temp = array[j];
        array[j]= array [j + 1];
        array[j + 1] = temp;
      }
      
    }
    
  }
  
}

int main() {

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
  
  int array[] =  {10, 6, 5, 1, 9, 7, 8, 3, 2, 4};
  int size = sizeof(array)/sizeof(array[0]);

  sortArray(array, size);

  for (int element : array)
  {
    std::cout << element << " ";
  }
  

  return 0;
}