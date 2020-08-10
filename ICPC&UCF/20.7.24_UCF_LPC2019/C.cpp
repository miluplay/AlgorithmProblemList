#include <iostream>
#include <set>
using namespace std;
struct node {
  string str;
  int len;
} dict[100];
set<string> s_dic;
int main() {
  int n, m;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> dict[i].str;
    s_dic.insert(dict[i].str);
    dict[i].len = dict[i].str.length();
  }
  cin >> m;
  string str;
  for (int i = 1; i <= m; i++) {
    cin >> str;
    cout << str << endl;
    if (s_dic.find(str) != s_dic.end()) {
      cout << "CORRECT" << endl << endl;
      continue;
    }
    int len = str.length();
    bool non = true;
    for (int j = 0; j < n; j++) {
      if (dict[j].len == len - 1) {
        int k1 = 0, k2 = 0;
        while (dict[j].str[k1] == str[k2]) {
          k1++;
          k2++;
        }
        k2++;
        while (dict[j].str[k1] == str[k2]) {
          if (k1 == dict[j].len && k2 == len) {
            cout << "ONE LETTER ADDED TO " << dict[j].str << endl;
            non = false;
            break;
          }
          k1++;
          k2++;
        }
      } else if (dict[j].len == len) {
        int kt = 0;
        for (int k = 0; k < len; k++)
          if (dict[j].str[k] != str[k]) kt++;
        if (kt == 0)
          continue;
        else if (kt == 1) {
          cout << "ONE LETTER DIFFERENT FROM " << dict[j].str << endl;
          non = false;
        } else if (kt == 2) {
          int ktt;
          for (ktt = 0; ktt < len; ktt++)
            if (dict[j].str[ktt] != str[ktt]) break;
          if (str[ktt] == dict[j].str[ktt + 1] &&
              str[ktt + 1] == dict[j].str[ktt]) {
            cout << "TWO LETTERS TRANSPOSED IN " << dict[j].str << endl;
            non = false;
          }
        }
      } else if (dict[j].len == len + 1) {
        int k1 = 0, k2 = 0;
        while (dict[j].str[k1] == str[k2]) {
          k1++;
          k2++;
        }
        k1++;
        while (dict[j].str[k1] == str[k2]) {
          if (k1 == dict[j].len && k2 == len) {
            cout << "ONE LETTER OMITTED FROM " << dict[j].str << endl;
            non = false;
            break;
          }
          k1++;
          k2++;
        }
      }
    }
    if (non) cout << "UNKNOWN" << endl;
    cout << endl;
  }
  return 0;
}