// Link:https://www.51nod.com/Challenge/Problem.html#problemId=2110
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT int n, t, sum = 0;
  cin >> n;
  while (n--) {
    cin >> t;
    sum += t;
  }
  cout << sum << endl;
  return 0;
}