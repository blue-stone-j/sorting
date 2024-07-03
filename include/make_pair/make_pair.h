#ifndef MAKE_PAIR_H
#define MAKE_PAIR_H

#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
#include <utility>
#include <algorithm>
#include <fstream>
#include <sstream>

std::vector<std::pair<double, double>> findPairsOptimized(const std::vector<double> &a,
                                                          const std::vector<double> &b,
                                                          const double thr)
{
  std::vector<std::pair<double, double>> pairs;
  size_t indexA = 0; // 用于遍历数组a

  for (double numB : b)
  {
    double closestDiff = std::numeric_limits<double>::max( );
    double closestNumA = 0.0;
    bool found         = false;

    // 向前移动indexA直到找到更大的元素或结束
    while (indexA < a.size( ) && a[indexA] <= numB)
    {
      double currentDiff = std::abs(a[indexA] - numB);
      if (currentDiff < closestDiff)
      {
        closestDiff = currentDiff;
        closestNumA = a[indexA];
        found       = true;
      }
      ++indexA;
    }

    // 检查indexA当前位置的元素（如果存在），可能比之前的元素更接近numB
    if (indexA < a.size( ))
    {
      double currentDiff = std::abs(a[indexA] - numB);
      if (currentDiff < closestDiff)
      {
        closestDiff = currentDiff;
        closestNumA = a[indexA];
        found       = true;
      }
    }

    if (found && closestDiff <= thr)
    {
      pairs.emplace_back(numB, closestNumA);
    }

    // 如果当前a[indexA]大于numB，下一个numB可能还是与当前a[indexA]最接近，所以indexA不需要回退
  }

  // 对结果进行排序，确保按照升序排列
  std::sort(pairs.begin( ), pairs.end( ));

  return pairs;
}

#endif