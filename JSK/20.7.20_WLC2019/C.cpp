#include <iostream>
using namespace std;
int main() {
  int n, tx, ty;
  cin >> n;
  char mymap[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) {
      cin >> mymap[i][j];
      if (mymap[i][j] == 'K') {
        tx = i;
        ty = j;
      }
    }
  mymap[tx][ty] = '-';
  mymap[tx - 1][ty - 1] = '-';
  mymap[tx + 1][ty + 1] = '-';
  mymap[tx + 1][ty - 1] = '-';
  mymap[tx - 1][ty + 1] = '-';
  mymap[tx][ty + 1] = '-';
  mymap[tx][ty - 1] = '-';
  mymap[tx + 1][ty] = '-';
  mymap[tx - 1][ty] = '-';
  for (int i = 0; i < n; i++)
    if (mymap[n - 1][i] == '*') {
      cout << "-1" << endl;
      return 0;
    }
  int sum = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n; j++) {
      if (mymap[i][j] == '-' || mymap[i][j] == '$') continue;
      if (j < n - 1 && mymap[i + 1][j + 1] == '-') {
        mymap[i + 1][j + 1] = '$';
        mymap[i][j] = '-';
        mymap[i][j + 2] = '-';
        sum++;
        continue;
      }
      if (j > 0 && mymap[i + 1][j - 1] == '-') {
        mymap[i + 1][j - 1] = '$';
        mymap[i][j] = '-';
        mymap[i][j - 2] = '-';
        sum++;
        continue;
      }
      cout << -1 << endl;
      return 0;
    }
  }
  cout << sum << endl;
  return 0;
}