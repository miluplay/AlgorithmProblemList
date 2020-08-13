// Link:https://www.51nod.com/Challenge/Problem.html#problemId=2090
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT int n;
  cin >> n;
  bool flag = false;
  while (n != 0) {
    if (n % 10 == 7) {
      flag = true;
      break;
    }
    n /= 10;
  }
  if (flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}