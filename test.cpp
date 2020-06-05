
// https :  // ac.nowcoder.com/acm/contest/5758/H

#include <bits/stdc++.h>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
#define ll long long
using namespace std;
int main() {
  int t;
  double x;
  cin >> t;
  while (t--) {
    cin >> x;
    double sum = 0;
    sum += x * x;
    x /= 2;
    sum += 3.14 * x * x * 2;
    cout << fixed << setprecision(2);
    cout << sum << endl;
  }
  return 0;
}