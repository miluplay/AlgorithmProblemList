// 题目链接：https://www.51nod.com/Challenge/Problem.html#problemId=3196
// Solved!
// 阶乘后有几个零，每个5有一个，每个25有两个。。。
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
int GetAnswer(int a) { return a == 0 ? 0 : a / 5 + GetAnswer(a / 5); }
using namespace std;
int main() {
  BT int a;
  cin >> a;
  cout << GetAnswer(a) << endl;
  return 0;
}