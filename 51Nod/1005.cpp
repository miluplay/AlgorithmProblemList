// Link:https://www.51nod.com/Challenge/Problem.html#problemId=1005
// 大数，高精度
// Solved!
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
const int Length = 10010;
string NumsAdd(string a, string b) {
  string ans;
  int Num_a[Length] = {0}, Num_b[Length] = {0};
  int Len_a = a.length(), Len_b = b.length();
  for (int i = 0; i < Len_a; i++) Num_a[Len_a - 1 - i] = a[i] - '0';
  for (int i = 0; i < Len_b; i++) Num_b[Len_b - 1 - i] = b[i] - '0';
  int Len_max = Len_a > Len_b ? Len_a : Len_b;
  for (int i = 0; i < Len_max; i++) {
    Num_a[i] += Num_b[i];
    Num_a[i + 1] += Num_a[i] / 10;
    Num_a[i] %= 10;
  }
  if (Num_a[Len_max]) Len_max++;
  for (int i = Len_max - 1; i >= 0; i--) ans += Num_a[i] + '0';
  return ans;
}
string NumsSub(string a, string b) {
  string ans;
  int Num_a[Length] = {0}, Num_b[Length] = {0};
  int Len_a = a.length(), Len_b = b.length();
  for (int i = 0; i < Len_a; i++) Num_a[Len_a - 1 - i] = a[i] - '0';
  for (int i = 0; i < Len_b; i++) Num_b[Len_b - 1 - i] = b[i] - '0';
  int Len_max = Len_a > Len_b ? Len_a : Len_b;
  for (int i = 0; i < Len_max; i++) {
    Num_a[i] -= Num_b[i];
    if (Num_a[i] < 0) Num_a[i] += 10, Num_a[i + 1] -= 1;
  }
  while (Len_max > 0 && !Num_a[Len_max]) Len_max--;
  for (int i = Len_max; i >= 0; i--) ans += Num_a[i] + '0';
  return ans;
}
int main() {
  BT string a, b;
  cin >> a >> b;
  if (a[0] == '-' && b[0] == '-') {
    a.erase(a.begin());
    b.erase(b.begin());
    cout << "-" << NumsAdd(a, b) << endl;
  } else if (a[0] == '-') {
    a.erase(a.begin());
    if (a.length() > b.length())
      cout << "-" << NumsSub(a, b) << endl;
    else if (a.length() < b.length())
      cout << NumsSub(b, a) << endl;
    else if (a <= b)
      cout << NumsSub(b, a) << endl;
    else
      cout << "-" << NumsSub(a, b) << endl;
  } else if (b[0] == '-') {
    b.erase(b.begin());
    if (b.length() > a.length())
      cout << "-" << NumsSub(b, a) << endl;
    else if (b.length() < a.length())
      cout << NumsSub(a, b) << endl;
    else if (b <= a)
      cout << NumsSub(a, b) << endl;
    else
      cout << "-" << NumsSub(b, a) << endl;
  } else
    cout << NumsAdd(a, b) << endl;
  return 0;
}