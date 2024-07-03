#include "merge_arrays/min_heap.h"

int main( )
{
  std::vector<std::vector<int>> arrays = {
      {2, 4, 7, 10, 13},
      {1, 3, 5, 8, 11, 14},
      {6, 9, 12, 15, 18, 21},
      {0, 2, 6, 8, 10},
      {3, 7, 11}};

  std::vector<int> mergedArray = mergeSortedArrays(arrays);

  std::cout << "Merged Array: ";
  for (int num : mergedArray)
  {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}