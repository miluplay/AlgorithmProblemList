#include <iostream>
using namespace std;
int main() {
  string s;
  int n, i;
  cin >> n;
  n++;
  s = to_string(n);

  for (i = 0; i < s.length(); i++)
    if (s[i] == '0') {
      s[i] = 1;
      break;
    }
  for (i; i < s.length(); i++) s[i] = '1';
  cout << s << endl;
  return 0;
}