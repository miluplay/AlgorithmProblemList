// https://www.51nod.com/Challenge/Problem.html#problemId=2059
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int GetAnswer(int a) {
  if (a <= 2) return a;
  return GetAnswer(a - 1) + GetAnswer(a - 2);
}
int main() {
  BT int n;
  cin >> n;
  cout << GetAnswer(n - 1) << endl;
  return 0;
}