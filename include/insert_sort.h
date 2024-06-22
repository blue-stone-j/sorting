#ifndef INSERT_SORT_H
#define INSERT_SORT_H

#include <iostream>

#define M 11

void InsertSort(int a[])
{
  std::cout << "排序过程:" << std::endl;
  int temp; // 临时变量
  int i, j; // 循环变量
  for (i = 1; i < M; i++)
  {
    temp = a[i];                               // 获取比较值
    for (j = i; j > 0 && a[j - 1] > temp; j--) // 前i个元素,如果有大元素交换
    {
      a[j] = a[j - 1]; // 移到当前位置
    }
    a[j] = temp; // 将最后一个交换的j位置元素赋值temp
    for (int k = 0; k < M; k++)
    {
      std::cout << a[k] << " ";
    }
    std::cout << std::endl;
  }
}

#endif