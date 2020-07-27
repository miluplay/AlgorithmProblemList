// https://www.jisuanke.com/contest/10443
#include <iomanip>
#include <iostream>
using namespace std;
double pre2 = 1.4142135;
double pre6 = 2.4494897;
int main() {
  int n;
  cin >> n;
  while (n--) {
    double r;
    cin >> r;
    r *= (2 + pre2 + pre6);
    cout << fixed << setprecision(5);
    cout << r * r << endl;
  }
  return 0;
}