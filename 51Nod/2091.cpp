// Link:https://www.51nod.com/Challenge/Problem.html#problemId=2091
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT int l, r;
  cin >> l >> r;
  bool ans = false;
  for (int i = l; i <= r; i++) {
    int t = i;
    bool flag = false;
    while (t) {
      if (t % 10 == 7) {
        flag = true;
        ans = true;
        break;
      }
      t /= 10;
    }
    if (flag) cout << i << endl;
  }
  if (!ans) cout << "None" << endl;
  return 0;
}