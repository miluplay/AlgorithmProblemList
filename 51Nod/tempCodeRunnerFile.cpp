// Link:https://www.51nod.com/Challenge/Problem.html#problemId=1001
#include <algorithm>
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
#define ll long long
using namespace std;
pair<int, int> arr[50050];
bool check[50050];
int main() {
  BT ll n, k, t, len = 0;
  bool flag = true;
  cin >> k >> n;
  for (ll i = 0; i < n; i++) {
    cin >> t;
    if (check[k - t]) {
      arr[len].first = min(t, k - t);
      arr[len++].second = max(t, k - t);
      flag = false;
    }
    check[t] = true;
  }
  sort(arr, arr + len);
  for (int i = 0; i < len; i++)
    cout << arr[i].first << " " << arr[i].second << endl;
  if (flag) cout << "No Solution" << endl;
  return 0;
}