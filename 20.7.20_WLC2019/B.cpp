#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int k, sum = 0;
  vector<int> v;
  cin >> k;
  for (int i = 1; i * i < 1e9; i++) {
    int t = i * i - k;
    if (i > k) break;
    if (t == 0) continue;
    int bt = abs(t);
    if (bt == (int)sqrt(bt) * (int)sqrt(bt)) v.push_back(t);
  }
  cout << v.size() << endl;
  sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++) cout << v[i] << endl;
  return 0;
}
