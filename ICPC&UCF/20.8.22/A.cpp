#include <iostream>
#define ll long long
using namespace std;
int main() {
  ll n, a = 1, sum;
  cin >> n;
  if (n <= 3) {
    cout << n << endl;
    return 0;
  }
  n--;
  sum = n;
  ll tep = 1;
  while (n - tep) {
    tep = 3 * tep + 1;
    a *= 3;
    ll temp = n - tep;
    ll temp_s = 0;
    ll mytep = a;
    while (temp) {
      temp_s += temp / mytep;
      temp %= mytep;
      mytep /= 3;
      if (temp % mytep <= mytep / 3) {
        temp_s--;
        temp += mytep;
      }
    }
    sum = min(sum, temp_s);
  }
  cout << sum + 1 << endl;
  return 0;
}