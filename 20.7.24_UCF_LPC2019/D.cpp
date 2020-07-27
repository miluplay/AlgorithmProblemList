#include <iomanip>
#include <iostream>
using namespace std;
double pre2 = 1.4142135;
double pre6 = 2.4494897;
int main() {
  double r;
  cin >> r;
  r *= (2 + pre2 + pre6);
  cout << fixed << setprecision(5);
  cout << r * r << endl;
  return 0;
}