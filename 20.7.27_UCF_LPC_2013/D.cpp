#include <iostream>
#include <set>
using namespace std;
bool mymap[33][33];
bool myroad[33];
void Init() {
  for (int i = 0; i < 33; i++) {
    myroad[i] = false;
    for (int j = 0; j < 33; j++) mymap[i][j] = false;
  }
}
int main() {
  int m, t, n, e;
  set<string> str;
  cin >> m;
  while (m--) {
    str.clear();
    Init();
    cin >> t;
    string s;
    while (t--) {
      cin >> s;
      str.insert(s);
    }
    cin >> n >> e;
    int a, b;
    while (e--) {
      cin >> a >> b >> s;
      if (str.find(s) == str.end()) {
        mymap[a][b] = true;
        mymap[b][a] = true;
      }
    }
    myroad[0] = true;
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        if (mymap[i][j] && myroad[i]) myroad[j] = true;
    if (myroad[n - 1])
      cout << 1 << endl;
    else
      cout << 0 << endl;
  }
  return 0;
}