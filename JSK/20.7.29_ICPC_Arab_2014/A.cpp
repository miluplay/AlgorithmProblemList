#include <iostream>
#define ll long long
using namespace std;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
int main() {
  ll t, x, n, y, m, a;
  cin >> t;
  for (int k = 1; k <= t; k++) {
    cin >> x >> n >> y >> m;
    a = 0;
    for (int i = 1; i <= n; i++) {
      if (a > x)
        x += a;
      else
        a += x;
    }
    if (a > x)
      a += y;
    else
      x += y;
    cout << "Case " << k << ": ";
    cout << gcd(x, a) << endl;
  }
  return 0;
}
