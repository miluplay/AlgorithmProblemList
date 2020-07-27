#include <iostream>
using namespace std;
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int main() {
  int n, x1, y1, x2, y2;
  cin >> n;
  while (n--) {
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == 0) x1 = y1;
    if (x2 == 0) x2 = y2;
    if (y1 == 0) y1 = x1;
    if (y2 == 0) y2 = x2;
    if (x1 < y1) {
      x1 += y1;
      y1 = x1 - y1;
      x1 -= y1;
    }
    if (x2 < y2) {
      x2 += y2;
      y2 = x2 - y2;
      x2 -= y2;
    }
    cout << gcd(x1, y1) << " " << gcd(x2, y2) << endl;
    if (gcd(x1, y1) == gcd(x2, y2))
      cout << 1 << endl;
    else
      cout << 0 << endl;
  }
}