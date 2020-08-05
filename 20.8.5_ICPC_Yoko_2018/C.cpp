#include <cmath>
#include <iostream>
#include <unordered_set>
#define ll long long
using namespace std;
unordered_set<int> check;
int main() {
  ll x = 1;
  while (x * 2 > 0) {
    x *= 2;
    check.insert(x);
  }
  ll n;
  while (cin >> n && n != 0) {
    ll N = 2 * n, a = sqrt(N), X, Y;
    for (X = a; X > 0; X--)
      if (N % X == 0) {
        Y = N / X;
        if ((X + Y) % 2 == 0) continue;
        break;
      }
    cout << (Y - X + 1) / 2 << " " << X << endl;
  }
  return 0;
}