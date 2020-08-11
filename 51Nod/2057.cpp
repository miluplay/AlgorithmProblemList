// https://www.51nod.com/Challenge/Problem.html#problemId=2057
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT int t, n, min = 99999;
  cin >> t;
  while (t--) {
    cin >> n;
    if (min > n) min = n;
  }
  cout << min << endl;
  return 0;
}