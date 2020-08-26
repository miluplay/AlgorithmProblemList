#include <algorithm>
#include <iostream>
#define ll long long
using namespace std;
const ll MOD = 998244353;
ll sum = 0;
int nums[1111], suma[1111], len;
int main() {
  int n, k, a;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> a;
    nums[a]++;
  }
  sort(nums, nums + 1111, greater<int>());
  while (nums[len]) len++;
  for (int i = 0; i < len; i++) suma[i] = nums[i];
  for (int i = len - 2; i > 0; i--) suma[i] += suma[i + 1];
  for (int i = 0; i < len - 1; i++) {
    sum += nums[i] * suma[i + 1];
    sum %= MOD;
  }
  cout << sum << endl;
  return 0;
}