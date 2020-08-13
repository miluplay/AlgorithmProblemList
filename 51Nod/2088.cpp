// Link:https://www.51nod.com/Challenge/Problem.html#problemId=2088
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2 * i + 1; j++) cout << "*";
    cout << endl;
  }
  return 0;
}