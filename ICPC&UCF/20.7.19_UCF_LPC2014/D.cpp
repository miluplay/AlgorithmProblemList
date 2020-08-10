#include <iostream>
using namespace std;
int get_cop(int a, int b) { return b == 0 ? a : get_cop(b, a % b); }
int main() {
  int n;
  cin >> n;
  string s;
  for (int t = 1; t <= n; t++) {
    cin >> s;
    cout << "Ticket #" << t << ":\n";
    bool flag = false;
    for (int i = 1; i < s.length(); i++) {
      string left_s, right_s;
      left_s = s.substr(0, i);
      right_s = s.substr(i);
      left_s.c_str();
      right_s.c_str();
      int left_num = atoi(left_s.c_str());
      int right_num = atoi(right_s.c_str());
      if (get_cop(left_num, right_num) == 1) {
        cout << left_num << " " << right_num << endl;
        flag = true;
        break;
      }
    }
    if (!flag) cout << "Not relative" << endl;
    cout << endl;
  }
  return 0;
}