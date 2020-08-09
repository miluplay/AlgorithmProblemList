// https://www.jisuanke.com/contest/10443
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  while (n--) {
    double r;
    cin >> r;
    r *= (2 + sqrt(2) + sqrt(6));
    cout << fixed << setprecision(5);
    cout << r * r << endl;
  }
  return 0;
}
