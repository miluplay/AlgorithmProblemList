#include <iostream>

using namespace std;

int main() {
  int n, s, a = 0, old = 0;
  cin >> n >> s;
  while (n--) {
    cin >> a;
    a = max(a, old);
    old = a;
  }
  cout << (a * s + 999) / 1000 << endl;
  return 0;
}