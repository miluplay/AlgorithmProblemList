#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int arr[5555];
vector<int >
int GetNext(int div, int dif, int n) {
  int i = div + 1;
  while (i < n && arr[i] - arr[div] != dif) i++;
  return i;
}
int main() {
  int n, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> arr[i];
  sort(arr, arr + n);
  for (int i = 0; i < n - 1; i++) {
    for (int div = i + 1; div < n; div++) {
      int dif = arr[div] - arr[i], len = 0;
      while (div < n) {
        len++;
        div = GetNext(div, dif, n);
      }
      ans = max(ans, len);
    }
  }
  cout << ans << endl;
  return 0;
}