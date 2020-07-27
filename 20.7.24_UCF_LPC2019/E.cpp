#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
#define ll long long
using namespace std;
struct node {
  int nums;
  int mus_n[11];
} dict[1010];
ll get_min(ll a, ll b) {
  if (a > b)
    return b;
  else
    return a;
}
ll get_button(ll a, ll b) {
  if (a == b)
    return 1;
  else if (b > a)
    return get_min(b - a - 1, t - b + a + 1);
  else
    return get_min(a - b + 1, t - a - 1 + b);
}
ll get_step(ll a, ll b, ll t) {
  a = (a + 1) % t;
  b %= t;
  ll r1 = a - b;
  if (r1 < 0) r1 = -r1;
  ll r2 = t - r1;
  return r1 < r2 ? r1 : r2;
}
int main() {
  BT ll t, s, sum;
  bool newMemoIndex[11];
  int oldMemoSize = 1;
  cin >> t >> s;
  sum = 999999;
  for (int i = 0; i < s; i++) {
    cin >> dict[i].nums;
    for (int j = 0; j < dict[i].nums; j++) {
      cin >> dict[i].mus_n[j];
      newMemoIndex[j] = false;
      for (int k = 0; k < oldMemoSize; k++) {
        ll temp_res = get_step(dict[i - 1].mus_n[k], dict[i].mus_n[j], t);
        if()
      }
    }
  }
  int a;
  for (int i = 0; i < dict[0].nums; i++) {
    if (dict[0].mus_n[i] - 1 < sum) {
      sum = dict[0].mus_n[i] - 1;
      a = dict[0].mus_n[i];
    }
  }
  for (int th = 1; th < s; th++) {
    int i_min = 999999, b = 0;
    for (int i = 0; i < dict[th].nums; i++) {
      int temp = get_button(a, dict[th].mus_n[i]);
      if (temp < i_min) {
        i_min = temp;
        b = dict[th].mus_n[i];
      }
    }
    sum += get_button(a, b);
    a = b;
    th++;
  }
  cout << sum << endl;
  return 0;
}