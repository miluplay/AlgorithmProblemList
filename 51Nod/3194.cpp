// 题目链接：https://www.51nod.com/Challenge/Problem.html#problemId=3194
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT int a, b;
  cin >> a >> b;
  if (a > b)
    cout << a;
  else
    cout << b;
  return 0;
}