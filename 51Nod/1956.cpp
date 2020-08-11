// Link:https://www.51nod.com/Challenge/Problem.html#problemId=1956
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT int n;
  bool flag = false;
  cin >> n;
  for (int o = 2; o <= n; o++)
    for (int r = 2; r < o; r++)
      for (int s = r + 1; s < o; s++)
        for (int t = s + 1; t < o; t++)
          if (o * o * o == r * r * r + s * s * s + t * t * t) {
            cout << "(" << o << "," << r << "," << s << "," << t << ")" << endl;
            flag = true;
          }
  if (!flag) cout << "OMG" << endl;
  return 0;
}