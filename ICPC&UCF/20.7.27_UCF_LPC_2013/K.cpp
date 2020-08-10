#include <iostream>
using namespace std;
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int main() {
  int t, m, a, b;
  cin >> t;
  while (t--) {
    cin >> m >> a >> b;
    cout << m << " " << a << " " << b << endl;
    if (a < b) {
      a += b;
      b = a - b;
      a = a - b;
    }
    int c = a * b / gcd(a, b);
    m -= 1;
    cout << m / a + m / b - m / c << endl;
  }
  return 0;
}