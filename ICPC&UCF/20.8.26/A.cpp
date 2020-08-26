#include <iostream>
using namespace std;
int main() {
  int k, same = 0;
  string a, b;
  cin >> k >> a >> b;
  for (int i = 0; i < a.length(); i++)
    if (a[i] == b[i]) same++;
  if (k > same)
    cout << same + (a.length() - same) - (k - same) << endl;
  else
    cout << k + a.length() - same << endl;
  return 0;
}