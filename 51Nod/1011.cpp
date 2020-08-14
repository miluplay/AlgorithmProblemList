// Link:https://www.51nod.com/Challenge/Problem.html#problemId=1011
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int main() {
  BT int a, b;
  cin >> a >> b;
  cout << gcd(a, b) << endl;
  return 0;
}