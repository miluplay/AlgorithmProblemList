#include <algorithm>
#include <cstring>
#include <iostream>
#define ll long long
using namespace std;  // dp
struct node {
  int value;   //硬币面值
  int counts;  //硬币数量
} coin[55];
ll dp[5050];
int t, s, n;
ll ans;
ll get_nums(int a) {  // 每种硬币取a枚
  memset(dp, 0, sizeof(dp));
  dp[0] = 1;
  for (int i = 0; i < n; i++) {
    if (coin[i].counts < a)
      break;  // 当前硬币不足a枚，因为我们的排序，所以之后的硬币也不到a枚，每种硬币取a枚的情况考虑完了。
    int temp = a * coin[i].value;  // 此种硬币取a枚，可以使哪些面值被组出来。
    for (int j = s - temp; j >= 0; j--) dp[j + temp] += dp[j];
    // 现有共计temp数量的若干枚硬币，可以放到原有的组合上
    // 比如[0]->[temp]现在有了1种导出的情况。而如果原本[x]本就有1种组合可以出现，那么现在加上temp，[x+temp]也就有一种情况可以出现。
  }
  return dp[s];  // [s]的位置记录了导出是s的情况数。
}

int main() {
  cin >> t;
  for (int k = 1; k <= t; k++) {
    cin >> s >> n;
    ans = 0;
    for (int i = 0; i < n; i++) cin >> coin[i].value >> coin[i].counts;
    // 排序，按硬币数量从多到少
    sort(coin, coin + n, [](node &a, node &b) { return a.counts > b.counts; });
    for (int i = 1; i * i <= s; i++)
      if (s % i == 0) {
        ans += get_nums(i);                      // 每枚硬币取i个
        if (i * i != s) ans += get_nums(s / i);  // 同样每枚硬币取s/i种
      }
    cout << "Case " << k << ": ";
    cout << ans << endl;
  }
}
