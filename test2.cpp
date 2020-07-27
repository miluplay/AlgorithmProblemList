#include <iostream>
using namespace std;
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int n, x1, y1, x2, y2;
bool road;
void dfs(int a, int b) {
  if (a == x2 && b == y2) {
    road = true;
    return;
  }
  if (road) {
    cout << a << " " << b << endl;
    return;
  }
  dfs(a + b, b);
  if (road) {
    cout << a << " " << b << endl;
    return;
  }
  dfs(a - b, b);
  if (road) {
    cout << a << " " << b << endl;
    return;
  }
  dfs(a, b + a);
  if (road) {
    cout << a << " " << b << endl;
    return;
  }
  dfs(a, b - a);
  if (road) {
    cout << a << " " << b << endl;
    return;
  }
}
int main() {
  cin >> n;
  road = false;
  while (n--) {
    cin >> x1 >> y1 >> x2 >> y2;
    dfs(x1, y1);
  }
}