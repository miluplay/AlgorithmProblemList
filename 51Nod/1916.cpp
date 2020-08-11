// Link:https://www.51nod.com/Challenge/Problem.html#problemId=1916
#include <cmath>
#include <iostream>
#define PI acos(-1)
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT int t, x, l, z;
  cin >> t;
  while (t--) {
    cin >> x >> l >> z;
    if (z > 180) z = 360 - z;
    // if (5 * l < 2 * 2 * PI * x * z / 360)
    if (l * 450 < PI * x * z)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
  return 0;
}