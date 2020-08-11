// https://www.51nod.com/Challenge/Problem.html#problemId=2087
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT int n;
  cin >> n;
  for (int i = 1; i * 3 <= n; i++) cout << i * 3 << endl;
  return 0;
}