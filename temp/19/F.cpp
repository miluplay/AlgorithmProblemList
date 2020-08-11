// a数列记录了斐波那契数列的和，在a[91]的位置达到了2^64-1大小
// https://ac.nowcoder.com/acm/contest/5758/F

#include <bits/stdc++.h>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;
ull a[100];
int main() {
  int t;
  cin >> t;
  a[1] = 1;
  a[2] = 2;
  ull t1 = 2, n;
  for (int i = 3; i <= 91; i++) {
    a[i] = a[i - 1] + t1;
    t1 = a[i] - a[i - 2];
  }
  while (t--) {
    cin >> n;
    int sum = 0;
    while (sum <= 91 && a[sum] <= n) sum++;
    cout << sum - 1 << endl;
  }
  return 0;
}