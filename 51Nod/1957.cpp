// https://www.51nod.com/Challenge/Problem.html#problemId=1957
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT int n, l, w, h;
  string name, minName, maxName;
  int min_l = 25001, min_w = 25001, min_h = 25001, max_l = -1, max_w = -1,
      max_h = -1;
  cin >> n;
  while (n--) {
    cin >> l >> w >> h >> name;
    if (l * w * h > max_l * max_w * max_h) {
      max_l = l;
      max_w = w;
      max_h = h;
      maxName = name;
    }
    if (l * w * h < min_l * min_w * min_h) {
      min_l = l;
      min_w = w;
      min_h = h;
      minName = name;
    }
  }
  cout << maxName << " " << minName << endl;
  return 0;
}