// Link:https://www.51nod.com/Challenge/Problem.html#problemId=1316
#include <algorithm>
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int arr[10][10], R_Need[10], C_Need[10];
int main() {
  BT int r, c, n, sum = 0;
  cin >> r >> c;
  cin >> n;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> arr[i][j];
  for (int i = 0; i < n; i++) {
    int t = 0;
    for (int j = 0; j < n / 2; j++)
      if (arr[i][j] != arr[i][n - j - 1]) t++;
    R_Need[i] = t;
  }
  for (int i = 0; i < n; i++) {
    int t = 0;
    for (int j = 0; j < n / 2; j++)
      if (arr[j][i] != arr[n - j - 1][i]) t++;
    C_Need[i] = t;
  }
  sort(R_Need, R_Need + n);
  sort(C_Need, C_Need + n);
  for (int i = 0; i < r; i++) sum += R_Need[i];
  for (int i = 0; i < c; i++) sum += C_Need[i];
  return 0;
}