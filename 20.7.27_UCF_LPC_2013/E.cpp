/*
-12、8的最小公约数与12、8的最小公约数相同。
也就是两个数以及他们的公约数这三个数都可以任意转换正负。
*/

// 辗转相除法
#include <iostream>
using namespace std;
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int get_sol(int a, int b) {
  if (a == 0 && b == 0) return -1;
  if (a == 0) return b;
  if (b == 0) return a;
  return gcd(a, b);
}
int main() {
  int n, x1, y1, x2, y2;
  cin >> n;
  while (n--) {
    cin >> x1 >> y1 >> x2 >> y2;
    int t = get_sol(abs(x1), abs(y1)) == get_sol(abs(x2), abs(y2)) ? 1 : 0;
    cout << t << endl;
  }
}