#include <iostream>
using namespace std;
const int maxn = 1010;
int prime[maxn], num = 0;
bool check[maxn];
void judge_prime(int n) {
  check[0] = check[1] = true;
  for (int i = 2; i <= n; i++) {
    if (!check[i]) prime[num++] = i;
    for (int j = 2 * i; j <= n; j += i) check[j] = true;
  }
  return;
}
int main() {
  int x, sum = 1, p;
  cin >> x;
  judge_prime(x);
  while (true) {
    for (p = x - 1; p >= 2; p--)
      if (!check[p] && !check[x - p]) break;
    if (2 * p - x < 4) {
      cout << sum << endl;
      break;
    }
    x = 2 * p - x;
    sum++;
  }
  return 0;
}