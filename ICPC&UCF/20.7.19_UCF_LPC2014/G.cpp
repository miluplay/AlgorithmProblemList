#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;
struct node {
  double x, y, r;
} arr[333];
double DLoad[333][333];

double GetLength(node a, node b) {
  double org = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
  double adj = org - a.r - b.r;
  if (adj < 0) adj = 0;
  return adj;
}

int main() {
  int T, p, c, x1, x2, y1, y2;
  cin >> T;
  for (int s = 1; s <= T; s++) {
    cin >> p;
    for (int i = 0; i < p; i++) cin >> arr[i].x >> arr[i].y >> arr[i].r;
    cin >> c;
    for (int i = p; i < p + 2 * c; i++) {
      cin >> arr[i].x >> arr[i].y;
      arr[i].r = 0;
    }
    for (int i = 0; i < p + 2 * c; ++i)
      for (int j = 0; j < p + 2 * c; ++j)
        DLoad[i][j] = DLoad[j][i] = GetLength(arr[i], arr[j]);
    for (int k = 0; k < p + 2 * c; k++)
      for (int i = 0; i < p + 2 * c; i++)
        for (int j = 0; j < p + 2 * c; j++)
          DLoad[i][j] = min(DLoad[i][j], DLoad[i][k] + DLoad[k][j]);
    cout << "Campus #" << s << ":" << endl;
    for (int i = 0; i < c; i++) {
      cout << "  Path #" << i + 1 << ": Shortest sun distance is ";
      cout << fixed << setprecision(1) << DLoad[2 * i + p][2 * i + p + 1];
      cout << "." << endl;
    }
    cout << endl;
  }
  return 0;
}
