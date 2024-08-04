#include <iostream>
#include <vector>

// Function to partition the array on the basis of pivot
int partition(std::vector<int> &arr, int low, int high)
{
  int pivot = arr[high]; // Choosing the rightmost element as pivot
  int i     = (low - 1); // Index of smaller element

  for (int j = low; j <= high - 1; j++)
  {
    // If current element is smaller than the pivot
    if (arr[j] < pivot)
    {
      i++; // Increment index of smaller element
      std::swap(arr[i], arr[j]);
    }
  }
  std::swap(arr[i + 1], arr[high]); // move the pivot to middle of larger and smaller
  return (i + 1);
}

// Function to perform quick sort(data, index of left elememt, index of right)
void quickSort(std::vector<int> &arr, int low, int high)
{
  if (low < high)
  {
    // Partition the array and get the partitioning index
    int pi = partition(arr, low, high);

    // Recursively sort elements before and after partition
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

// Function to print the array
void printArray(const std::vector<int> &arr)
{
  for (int i = 0; i < arr.size( ); i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

/*
Explanation :
1. Partition Function :
  This function takes the last element as pivot and places it at the correct position in the sorted array.All elements
  smaller than the pivot are moved to the left, and all greater elements are moved to the right.

2.QuickSort Function :
  This is a recursive function that sorts the array.It calls the partition function to get the pivot index and then
  recursively sorts the sub-arrays.

3.Main Function :
  An example array is initialized and printed.The quickSort function is called to sort the array.The sorted array is
  printed.This implementation ensures the quick sort algorithm is performed correctly with a complexity of (n log n)
  on average.
*/