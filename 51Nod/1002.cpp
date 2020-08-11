// Link: https://www.51nod.com/Challenge/Problem.html#problemId=1002
// Solved!
// dp
#include <cmath>
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int Triangle[555][555], dp[555][555];
int main() {
  BT int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    for (int j = 0; j <= i; j++) cin >> Triangle[i][j];
  for (int i = 0; i < n; i++) dp[n - 1][i] = Triangle[n - 1][i];
  for (int i = n - 2; i >= 0; i--)
    for (int j = 0; j <= i; j++)
      dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + Triangle[i][j];
  cout << dp[0][0] << endl;
  return 0;
}