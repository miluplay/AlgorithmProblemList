#include <iostream>
#define PI 3.14
using namespace std;
int main() {
  double a, r, p1, p2;
  cin >> a >> p1 >> r >> p2;
  if (a * p2 < PI * r * r * p1)
    cout << "Whole pizza" << endl;
  else
    cout << "Slice of pizza" << endl;
  return 0;
}