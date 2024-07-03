#include "merge_arrays/merge_sorted.h"



int main( )
{
  std::vector<int> arr1 = {2, 4, 7, 10, 13};
  std::vector<int> arr2 = {1, 3, 5, 8, 11, 14};
  std::vector<int> arr3 = {6, 9, 12, 15, 18, 21};

  std::vector<int> mergedArray = mergeThreeSortedArrays(arr1, arr2, arr3);

  std::cout << "Merged Array: ";
  for (int num : mergedArray)
  {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}