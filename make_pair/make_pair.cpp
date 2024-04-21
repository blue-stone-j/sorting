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

int main( )
{
  std::vector<double> a;
  std::vector<double> b;
  double thr = 0.005;

  std::ifstream file("../make_pair/output.csv", std::ios_base::in); // 打开文件
  std::string line;

  if (file.is_open( ))
  {
    std::string value;

    getline(file, line);
    std::istringstream issb(line);
    while (getline(issb, value, ' '))
    { // 使用空格作为分隔符读取每个值
      // std::cout << value << std::endl; // 输出读取的值
      a.push_back(std::stod(value));
    }

    getline(file, line);
    std::istringstream issa(line);
    while (getline(issa, value, ' '))
    { // 使用空格作为分隔符读取每个值
      // std::cout << value << std::endl; // 输出读取的值
      b.push_back(std::stod(value));
    }

    file.close( ); // 关闭文件
  }
  else
  {
    std::cout << "Unable to open file" << std::endl; // 如果文件无法打开，输出错误消息
  }

  auto pairs = findPairsOptimized(a, b, thr);

  for (const auto &p : pairs)
  {
    std::cout << "(" << p.first << ", " << p.second << ")" << std::endl;
  }

  return 0;
}
