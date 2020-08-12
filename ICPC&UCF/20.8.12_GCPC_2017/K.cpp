// Link: https://www.jisuanke.com/contest/10450
#include <algorithm>
#include <iostream>

#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
struct node {
  string Name;
  int Value;
} arr[10010];

bool cmp(node a, node b) { return a.Value > b.Value; }

int main() {
  BT int n, d, k, sum = 0, i, j;
  cin >> n >> d >> k;
  for (i = 0; i < n; i++) cin >> arr[i].Name >> arr[i].Value;
  sort(arr, arr + n, cmp);
  for (i = 0; i < k; i++) {
    sum += arr[i].Value;
    if (sum > d) break;
  }
  if (sum > d) {
    cout << i + 1 << endl;
    for (j = 0; j <= i; j++) cout << arr[j].Name << ", YOU ARE FIRED!" << endl;
  } else
    cout << "impossible" << endl;
  return 0;
}