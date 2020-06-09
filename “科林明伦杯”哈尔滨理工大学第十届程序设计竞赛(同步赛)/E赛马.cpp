// 总链接 https://ac.nowcoder.com/acm/contest/5758
// https://ac.nowcoder.com/acm/contest/5758/E

#include <bits/stdc++.h>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;
int a[1111], b[1111];
int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(a, a + n);
    sort(b, b + n);
    int sum = 0, r = n - 1, l = n - 1;
    while (r >= 0 && l >= 0) {
      if (a[r] > b[l]) {
        sum++;
        r--;
        l--;
      } else
        l--;
    }
    cout << sum << endl;
  }
  return 0;
}