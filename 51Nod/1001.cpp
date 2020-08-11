// Link: https://www.51nod.com/Challenge/Problem.html#problemId=1001
// Solved!
#include <algorithm>
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int arr[50050];
int main() {
  BT int n, k;
  bool flag = true;
  cin >> k >> n;
  for (int i = 0; i < n; i++) cin >> arr[i];
  sort(arr, arr + n);
  int l = 0, r = n - 1;
  while (l < r) {
    while (arr[l] + arr[r] > k) r--;
    if (l < r && arr[l] + arr[r] == k) {
      cout << arr[l] << " " << arr[r--] << endl;
      flag = false;
    }
    l++;
  }
  if (flag) cout << "No Solution" << endl;
  return 0;
}