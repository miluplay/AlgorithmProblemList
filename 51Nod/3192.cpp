// 题目链接：https://www.51nod.com/Challenge/Problem.html#problemId=3192
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT int a, b, c;
  cin >> a >> b >> c;
  if (a > b && a > c)
    a < b + c ? cout << "yes" : cout << "no";
  else if (b > a && b > c)
    b < a + c ? cout << "yes" : cout << "no";
  else
    c < a + b ? cout << "yes" : cout << "no";
  return 0;
}