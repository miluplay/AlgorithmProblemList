#include <cmath>
#include <iostream>

#define ll long long
using namespace std;
int prime[100010];
bool check[1000010];
bool va_check[1000010];

int main() {
  int nums = 1;
  prime[0] = 1;
  for (int i = 2; i < 1000010; i++)
    if (!check[i]) {
      prime[nums++] = i;
      for (int j = 2 * i; j < 1000010; j += i) check[j] = true;
    }
  ll a, b;
  while (cin >> a >> b) {
    ll sum = 0;
    int pos = 0;
    for (ll i = a; i <= b; i++) {
      if (va_check[pos++] == true) continue;
      if (i < 1000010 && check[i] == false) {
        sum += i;
        if (i != 1)sum++;
        continue;
      }
      ll t_sum = 0;
      for (int j = 0; prime[j] <= sqrt(i); j++)
        if (i % prime[j] == 0) {
          if (prime[j] != i / prime[j]) t_sum += i / prime[j] + prime[j];
          else t_sum += prime[j];
        }
      sum += t_sum;
      for (int j = 1; prime[j] * i <= b; j++) {
        sum += t_sum + i * prime[j];
        va_check[i * prime[j] - a] = true;
      }
    }
    cout << sum << endl;
  }
  return 0;
}