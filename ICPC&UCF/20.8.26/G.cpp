#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
double GetLen(double x1, double y1, double x2, double y2) {
  return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
int main() {
  double x1, y1, x2, y2, x, y;
  cin >> x >> y >> x1 >> y1 >> x2 >> y2;
  cout << fixed << setprecision(3);
  if (x >= min(x1, x2) && x <= max(x1, x2))
    cout << min(abs(y - y1), abs(y - y2));
  else if (y >= min(y1, y2) && y <= max(y1, y2))
    cout << min(abs(x - x1), abs(x - x2));
  else if (x < min(x1, x2) && y < min(y1, y2))
    cout << GetLen(x, y, min(x1, x2), min(y1, y2));
  else if (x < min(x1, x2) && y > max(y1, y2))
    cout << GetLen(x, y, min(x1, x2), max(y1, y2));
  else if (x > max(x1, x2) && y < min(y1, y2))
    cout << GetLen(x, y, max(x1, x2), min(y1, y2));
  else if (x > max(x1, x2) && y > max(y1, y2))
    cout << GetLen(x, y, max(x1, x2), max(y1, y2));
  return 0;
}