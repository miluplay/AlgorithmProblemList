#include <cstring>
#include <iostream>
#define ll long long
using namespace std;
struct node {
  int value;
  int counts;
} coin[55];
ll dp[5050];
int t, s, n;
ll ans;
ll get_nums(int a) {
  memset(dp, 0, sizeof(dp));
  dp[0] = 1;
  for (int i = 0; i < n; i++) {
    if (coin[i].counts < a) break;
    int temp = a * coin[i].value;
    for (int j = s - temp; j >= 0; j--) dp[j + temp] += dp[j];
  }
}

int main() {
  cin >> t;
  for (int k = 1; k <= t; k++) {
    cin >> s >> n;
    ans = 0;
    for (int i = 0; i < n; i++) cin >> coin[i].value >> coin[i].counts;
    for (int i = 1; i * i <= s; i++)
      if (s % i == 0) {
        ans += get_nums(i);
        if (i * i != s) ans += get_nums(s / i);
      }
    cout << "Case " << k << ": ";
    cout << ans << endl;
  }
}
