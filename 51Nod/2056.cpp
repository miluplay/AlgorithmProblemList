// https://www.51nod.com/Challenge/Problem.html#problemId=2056
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT int n;
  bool flag = false;
  cin >> n;
  for (int i = 2; i < n; i++)
    if (n % i == 0) {
      flag = true;
      break;
    }
  if (flag)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
  return 0;
}