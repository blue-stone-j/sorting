#include "quick_sort.h"

int main( )
{
  std::vector<int> arr = {10, 7, 8, 9, 1, 5};
  int n                = arr.size( );
  std::cout << "Original array: ";
  printArray(arr);

  quickSort(arr, 0, n - 1);

  std::cout << "Sorted array: ";
  printArray(arr);

  return 0;
}