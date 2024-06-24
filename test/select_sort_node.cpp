#include "select_sort.h"


int main( )
{
  std::cout << "----------------选择排序---------------" << std::endl;
  int a[M] = {1110, 209, 386, 768, 185, 247, 606, 230, 834, 54, 12};
  std::cout << "排序之前的元素为:\n";
  for (int i = 0; i < M; i++) // 循环排序前数组
  {
    std::cout << a[i] << " ";
  }
  std::cout << std::endl;
  SelectSort(a); // 选择排序法
  std::cout << "排序结果为:\n";
  for (int i = 0; i < M; i++) // 循环排序后数组
  {
    std::cout << a[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}