#include <iostream>

using namespace std;
bool Triangle[1025][1025];

void LabelSpace(int start_x, int end_x, int start_y, int end_y) {
  for (int i = start_x; i < end_x; i++)
    for (int j = start_y; j < end_y; j++) Triangle[i][j] = false;
}

void GetTriangle(int start_x, int end_x, int start_y, int end_y) {
  if (start_x + 2 == end_x && start_y + 2 == end_y) return;
  LabelSpace(start_x, (3 * start_x + end_x) / 4, start_y,
             (start_y + end_y) / 2);
  LabelSpace((start_x + 3 * end_x) / 4, end_x, start_y, (start_y + end_y) / 2);
  GetTriangle((3 * start_x + end_x) / 4, (start_x + 3 * end_x) / 4, start_y,
              (start_y + end_y) / 2);
  GetTriangle(start_x, (start_x + end_x) / 2, (start_y + end_y) / 2, end_y);
  GetTriangle((start_x + end_x) / 2, end_x, (start_y + end_y) / 2, end_y);
}

int main() {
  int T, k, n;
  cin >> T;
  for (int s = 1; s <= T; s++) {
    cin >> k;
    n = 1 << k;
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++) Triangle[i][j] = true;
    GetTriangle(0, n, 0, n);
    cout << "Triangle #" << s << ":" << endl;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++)
        if (Triangle[j][i])
          cout << "X";
        else
          cout << " ";
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
