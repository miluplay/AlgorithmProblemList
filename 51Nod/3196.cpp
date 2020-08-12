// 题目链接：https://www.51nod.com/Challenge/Problem.html#problemId=1003
// 一个数的阶乘0的个数势必与包含5的个数有关，同时也要考虑在25之后，包含多少个25
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