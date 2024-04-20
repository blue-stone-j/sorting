#include <iostream>
#include <vector>

std::vector<int> mergeThreeSortedArrays(const std::vector<int> &arr1,
                                        const std::vector<int> &arr2,
                                        const std::vector<int> &arr3)
{
  int i = 0, j = 0, k = 0;
  std::vector<int> result;

  while (i < arr1.size( ) && j < arr2.size( ) && k < arr3.size( ))
  {
    if (arr1[i] < arr2[j])
    {
      if (arr1[i] < arr3[k])
      {
        result.push_back(arr1[i++]);
      }
      else
      {
        result.push_back(arr3[k++]);
      }
    }
    else
    {
      if (arr2[j] < arr3[k])
      {
        result.push_back(arr2[j++]);
      }
      else
      {
        result.push_back(arr3[k++]);
      }
    }
  }

  // Handle the remaining elements in arr1
  while (i < arr1.size( ))
  {
    result.push_back(arr1[i++]);
  }

  // Handle the remaining elements in arr2
  while (j < arr2.size( ))
  {
    result.push_back(arr2[j++]);
  }

  // Handle the remaining elements in arr3
  while (k < arr3.size( ))
  {
    result.push_back(arr3[k++]);
  }

  return result;
}

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
