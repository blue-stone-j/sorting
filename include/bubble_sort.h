#include <iostream>

#define M 11

void Bubble(int a[]) // 冒泡排序
{
  std::cout << "排序过程:" << std::endl;
  int temp;                       // 临时变量
  for (int i = 0; i < M - 1; i++) // 元素比较界限
  {
    for (int j = 0; j < M - 1 - i; j++) // 该元素与加1位置元素比较
    {
      if (a[j] > a[j + 1]) // 把大元素放到位置右
      {
        temp     = a[j]; // 元素交换
        a[j]     = a[j + 1];
        a[j + 1] = temp;
      }
    }
    for (int k = 0; k < M; k++)
    {
      std::cout << a[k] << " "; // 输出每次排序结果
    }
    std::cout << std::endl;
  }
}