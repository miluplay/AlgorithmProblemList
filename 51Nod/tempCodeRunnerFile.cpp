// Link:https://www.51nod.com/Challenge/Problem.html#problemId=2101
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT int a, b;
  cin >> a >> b;
  if (a > 0 && b > 0 && a + b < a)
    cout << "Yes" << endl;
  else if (a > 0 && (a + b > a || a + b < b))
    cout << "Yes" << endl;
  else if (b > 0 && (a + b < a || a + b > b))
    cout << "Yes" << endl;
  else if (a + b > a)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}