#include <iostream>
using namespace std;
struct node {
  string str;
  int len;
} dict[100];
int main() {
  int n, m;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> dict[i].str;
    dict[i].len = dict[i].str.length();
  }
  cin >> m;
  string str;
  for (int i = 1; i <= m; i++) {
    cin >> str;
    cout << "Word #" << i << ": " << str << endl;
    int sum = 0;
    int len = str.length();
    for (int j = 0; j < n; j++) {
      if (dict[j].len == len) {
        int k;
        for (k = 0; k < len; k++)
          if (dict[j].str[k] != str[k] && str[k] != '-') break;
        if (k == len) {
          cout << dict[j].str << endl;
          sum++;
        }
      }
    }
    cout << "Total number of candidate words = " << sum << endl << endl;
  }
  return 0;
}