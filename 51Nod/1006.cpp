// Link:https://www.51nod.com/Challenge/Problem.html#problemId=1006
// 最长公共子序列
#include <cmath>
#include <iostream>
#include <queue>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int arr[1111][1111], road[1111][1111];
queue<char> q;
int main() {
  BT string a, b;
  cin >> a >> b;
  for (int i = 1; i <= a.length(); i++)
    for (int j = 1; j <= b.length(); j++)
      if (a[i - 1] == b[j - 1]) {
        arr[i][j] = arr[i - 1][j - 1] + 1;
        road[i][j] = 1;
      } else if (arr[i - 1][j] >= arr[i][j - 1]) {
        arr[i][j] = arr[i - 1][j];
        road[i][j] = 2;
      } else {
        arr[i][j] = arr[i][j - 1];
        road[i][j] = 3;
      }
  for (int i = a.length(), j = b.length(); i > 0, j > 0;) {
    if (road[i][j] == 1) {
      q.push(a[i - 1]);
      i--;
      j--;
    } else if (road[i][j] == 2)
      i--;
    else
      j--;
  }
  while (!q.empty()) {
    cout << q.back();
    q.pop();
  }
  return 0;
}