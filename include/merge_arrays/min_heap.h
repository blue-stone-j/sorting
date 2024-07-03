#ifndef MIN_HEAP
#define MIN_HEAP

#include <iostream>
#include <vector>
#include <queue>
#include <functional>

// 定义一个用于存储元素和其来源数组索引的结构体
struct Element
{
  int value;
  int arrayIndex;
  int elementIndex;
};

// 比较函数，用于构建最小堆
struct Compare
{
  bool operator( )(Element const &e1, Element const &e2)
  {
    return e1.value > e2.value;
  }
};

std::vector<int> mergeSortedArrays(const std::vector<std::vector<int>> &arrays)
{
  std::priority_queue<Element, std::vector<Element>, Compare> minHeap;
  std::vector<int> result;

  // 初始化堆，将每个数组的第一个元素加入到堆中
  for (int i = 0; i < arrays.size( ); ++i)
  {
    if (!arrays[i].empty( ))
    {
      minHeap.push({arrays[i][0], i, 0});
    }
  }

  // 循环直到堆为空
  while (!minHeap.empty( ))
  {
    Element current = minHeap.top( );
    minHeap.pop( );
    result.push_back(current.value);

    // 如果当前数组中还有元素，将下一个元素加入堆中
    if (current.elementIndex + 1 < arrays[current.arrayIndex].size( ))
    {
      minHeap.push({arrays[current.arrayIndex][current.elementIndex + 1], current.arrayIndex, current.elementIndex + 1});
    }
  }

  return result;
}

#endif