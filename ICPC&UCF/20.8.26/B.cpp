#include <iostream>

using namespace std;

int main() {
  int n, c, a, arr[1111];
  cin >> n >> c;
  for (int i = 1; i <= c; i++) {
    cin >> a;
    if (i <= n) {
      cout << i << " ";
      arr[i] = a;
    } else {
      int t = arr[1], v = 1;
      for (int j = 1; j <= n; j++)
        if (t > arr[j]) {
          t = arr[j];
          v = j;
        }
      int val = arr[v];
      for (int j = 1; j <= n; j++) arr[j] -= val;
      cout << v << " ";
      arr[v] = a;
    }
  }
  return 0;
}