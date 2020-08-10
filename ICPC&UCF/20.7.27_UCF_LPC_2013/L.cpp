#include <iostream>
using namespace std;
int mymatrix[100010][100010];
int main() {
  int t, r, c, s;
  cin >> t;
  while (t--) {
    cin >> r >> c >> s;
    for (int i = 0; i < r; i++)
      for (int j = 0; j < c; j++) cin >> mymatrix[i][j];
      
  }
  return 0;
}