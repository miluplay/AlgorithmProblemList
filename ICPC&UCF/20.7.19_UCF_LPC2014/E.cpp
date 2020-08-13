#include <cstring>
#include <iostream>

using namespace std;
int board[111][111];

int main() {
  int n, r, c;
  cin >> n;
  for (int t = 1; t <= n; t++) {
    cin >> r >> c;
    for (int i = 0; i < r; i++)
      for (int j = 0; j < c; j++)
        if ((!i && !j) || (i == r - 1 && j == c - 1)) {
          char temp;
          cin >> temp;
          board[i][j] = 0;
        } else
          cin >> board[i][j];
    for (int i = 1; i < r; i++) board[i][0] = board[i][0] + board[i - 1][0];
    for (int i = 1; i < c; i++) board[0][i] = board[0][i] + board[0][i - 1];
    for (int i = 1; i < r; i++)
      for (int j = 1; j < c; j++)
        board[i][j] = max(board[i - 1][j], board[i][j - 1]) + board[i][j];
    cout << "Game Board #" << t << ": " << board[r - 1][c - 1] << endl;
    if (t < n) cout << endl;
  }
  return 0;
}
