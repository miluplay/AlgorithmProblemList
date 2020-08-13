#include <iostream>
using namespace std;
void Draw_ADCII(int a) {
  if (a == 1) {
    cout << "XX";
    return;
  }
  cout << " ";
  Draw_ADCII(a - 1);
  cout << " ";
  cout << endl;
  cout << " ";
  Draw_ADCII(a - 1);
  cout << " ";
}
int main() {
  int T, k;
  cin >> T;
  for (int s = 1; s <= T; s++) {
    cin >> k;
    cout << "Triangle #" << s << ":" << endl;
    Draw_ADCII(k);
    cout << endl;
    Draw_ADCII(k);
    cout << endl;
  }
  return 0;
}
