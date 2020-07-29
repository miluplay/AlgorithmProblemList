#include <iostream>
#define ll long long
using namespace std;
int main() {
  ll t, h, l, sum, a;
  cin >> t;
  for (int k = 1; k <= t; k++) {
    cin >> h >> l;
    sum = 0;
    a = 1;
    cout << "Case " << k << ": ";
    l--;
    sum += l;
    while (l >= a) {
      l -= a;
      h--;
      a *= 2;
    }
    sum += (a - l) * (h + 1);
    sum += 2 * l * h;
    cout << sum << endl;
  }
  return 0;
}