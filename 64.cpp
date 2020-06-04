高精度
https://ac.nowcoder.com/acm/contest/5758/H

#include <bits/stdc++.h>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
#define ll long long
using namespace std;
void print_128(__int128_t x) {
  if (x > 9) print_128(x / 10);
  int t = x % 10;
  cout << t;
}
int main() {
  ll t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    if (n == 1) {
      cout << 0 << endl;
      continue;
    }
    __int128_t sum = n;
    sum = sum * (sum - 1) / 2;
    print_128(sum);
    int k = 0;
    cout << endl;
  }
  return 0;
}