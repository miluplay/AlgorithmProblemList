#include <cstring>
#include <iostream>
using namespace std;
int paper[350][350];
int main() {
  int n, m, t, p, d, c, x, y;
  while (cin >> n >> m >> t >> p) {
    if (n == 0 && m == 0) break;
    memset(paper, 0, sizeof(paper));
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++) paper[i][j] = 1;
    for (int i = 0; i < t; i++) {
      cin >> d >> c;
      if (d == 1) {
        for (int j = 0; j < n; j++)
          for (int k = 0; k < m; k++) {
            if (j < c)
              paper[j][k] += paper[j + c][k];
            else
              paper[j][k] = paper[j + c][k];
          }
      } else {
        for (int j = 0; j < m; j++)
          for (int k = 0; k < n; k++) {
            if (j < c)
              paper[k][j] += paper[k][j + c];
            else
              paper[k][j] = paper[k][j + c];
          }
      }
    }
    for (int i = 0; i < p; i++) {
      cin >> x >> y;
      cout << paper[x][y] << endl;
    }
  }
  return 0;
}