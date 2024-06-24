#include <iostream>

#define M 11

void SelectSort(int a[])
{
  std::cout << "排序过程:" << std::endl;
  int pos;  // 目前最小的数字的位置
  int temp; // temp存最小数字
  for (int i = 0; i < M; i++)
  {
    pos  = i;                       // 最小值位置
    temp = a[i];                    // 最小值
    for (int j = i + 1; j < M; j++) // 查找最小的字符
    {
      if (a[j] < temp) // 新最小值出现
      {
        pos  = j; // 新的最小字符的位置
        temp = a[j];
      }
    }
    a[pos] = a[i]; // 交换元素
    a[i]   = temp; // 最小值置于最低位
    for (int k = 0; k < M; k++)
    {
      std::cout << a[k] << " ";
    }
    std::cout << std::endl;
  }
}