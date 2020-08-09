#include <iostream>
using namespace std;
int a[10001];
int main() {
  long long int n, ans = 0, cnt = 0;
  while (cin >> n && n != 0) {
    ans = cnt = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      ans += a[i];
    }
    ans /= n;
    for (int i = 0; i < n; i++) {
      if (a[i] <= ans) cnt++;
    }
    cout << cnt << endl;
  }

  return 0;
}
