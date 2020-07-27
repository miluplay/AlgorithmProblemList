#include <iostream>
using namespace std;
int main() {
  int t, n, m;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    cout << n << " " << m << endl;
    cout << m * n - 2 * (n - 1) << endl;
  }
  return 0;
}