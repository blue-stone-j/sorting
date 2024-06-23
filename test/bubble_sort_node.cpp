#include "bubble_sort.h"

int main( )
{
  std::cout << "----------------冒泡排序---------------" << std::endl;
  int a[M] = {0, 209, 386, 768, 185, 247, 606, 230, 834, 54, 12};
  std::cout << "排序之前的元素为:\n";
  for (int i = 0; i < M; i++) // 循环排序前数组
  {
    std::cout << a[i] << " ";
  }
  std::cout << std::endl;
  Bubble(a); // 冒泡法
  std::cout << "排序结果为:\n";
  for (int i = 0; i < M; i++) // 循环排序后数组
  {
    std::cout << a[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}