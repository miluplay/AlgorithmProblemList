#include <iostream>
#include <vector>
using namespace std;
typedef long long int ll;
vector<ll> matrix_line, matrix_line_con;
int main() {
  int r, c;
  ll s, temp;
  cin >> r >> c >> s;
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++) {
      cin >> temp;
      matrix_line.push_back(temp);
      matrix_line_con.insert(matrix_line_con.begin(), temp);
    }
  ll ans = -1;
  for (int i = 0; i < r; i++) {
    if (ans != -1) break;
    for (int j = 0; j < c; j++) {
      if (i == 0) break;
      matrix_line[i * c + j] += matrix_line[(i - 1) * c + j];
      matrix_line_con[i * c + j] += matrix_line_con[(i - 1) * c + j];
    }
    for (int k = 1; k <= c; k++) {
      ll t5 = k * (i + 1);
      for (int j = 0; j < c - k + 1; j++) {
        ll t1 = 0, t2 = 0;
        for (int k2 = 0; k2 < k; k2++) {
          t1 += matrix_line[i * c + j + k2];
          t2 += matrix_line_con[i * c + j + k2];
        }
        if (t1 >= s) ans = t5;
        if (t2 >= s) ans = t5;
        if (ans != -1) break;
      }
      if (ans != -1) break;
    }
  }
  cout << ans << endl;
  return 0;
}