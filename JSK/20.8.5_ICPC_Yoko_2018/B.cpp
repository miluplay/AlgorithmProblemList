#include <cstring>
#include <iostream>
using namespace std;
int paper[1010][1010];
int main() {
  int n, m, t, p, d, c, x, y, t_x, t_y;
  while (cin >> n >> m >> t >> p) {
    if (n == 0 && m == 0) break;
    memset(paper, 0, sizeof(paper));
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++) paper[i][j] = 1;
    t_x = t_y = 0;
    for (int i = 0; i < t; i++) {
      cin >> d >> c;
      if (d == 1) {
        for (int j = t_x; j < c + t_x; j++)
          for (int l = t_y; l < m + t_y; l++)
            paper[j + c][l] += paper[c + 2 * t_x - j - 1][l];
        t_x += c;
      } else {
        for (int j = t_y; j < c + t_y; j++)
          for (int l = t_x; l < n + t_x; l++)
            paper[l][j + c] += paper[l][c + 2 * t_y - j - 1];
        t_y += c;
      }
    }
    for (int i = 0; i < p; i++) {
      cin >> x >> y;
      cout << paper[x + t_x][y + t_y] << endl;
    }
  }
  return 0;
}