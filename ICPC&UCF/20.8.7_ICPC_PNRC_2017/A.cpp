// https://www.jisuanke.com/contest/10448
#include <iostream>
using namespace std;
int main() {
  string s;
  while (cin >> s) {
    int len = s.length();
    bool ans = true;
    for (int i = 1; i < len; i++)
      if (s[i] == s[i - 1]) {
        ans = false;
        break;
      }
    if (ans)
      cout << "Odd." << endl;
    else
      cout << "Or not." << endl;
  }
  return 0;
}