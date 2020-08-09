// 题目链接：https://www.51nod.com/Challenge/Problem.html#problemId=3100
// dp
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
const int MOD = 100003;
int dp[100010];
int main() {
  int n;
  cin >> n;
  dp[1] = dp[2] = dp[3] = 1;
  for (int i = 4; i <= n; i++) dp[i] = (dp[i - 1] + dp[i - 3]) % MOD;
  cout << dp[n] << endl;
  return 0;
}