//线性动态规划（最优子结构、无后效性）
#include <cmath>
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
typedef long long int ll;
ll t, new_index[11], old_index[11], new_value[11], old_value[11], answer;
int s, n, old_size;
ll comp(ll start, ll end) {
  start = (start + 1) % t;
  end = end % t;
  ll temp1 = abs(start - end);
  ll temp2 = t - temp1;
  if (temp1 < temp2) return temp1;
  return temp2;
}
ll get_button(ll a, ll b) {
  if (a == b)
    return 1;
  else if (b > a)
    return min(b - a - 1, t - b + a + 1);
  else
    return min(a - b + 1, t - a - 1 + b);
}
int main() {
  old_size = 1;
  old_index[0] = 0;
  old_value[0] = 0;
  cin >> t >> s;
  for (int i = 0; i < s; i++) {
    answer = -1;
    cin >> n;
    for (int j = 0; j < n; j++) {
      cin >> new_index[j];
      new_value[j] = -1;
      for (int k = 0; k < old_size; k++) {
        ll temp = comp(old_index[k], new_index[j]) + old_value[k];
        if (new_value[j] == -1 || temp < new_value[j]) new_value[j] = temp;
      }
      if (answer == -1 || answer > new_value[j]) answer = new_value[j];
    }
    old_size = n;
    for (int j = 0; j < n; j++) {
      old_index[j] = new_index[j];
      old_value[j] = new_value[j];
    }
  }
  cout << answer << endl;
  return 0;
}