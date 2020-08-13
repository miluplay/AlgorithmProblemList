// Link:https://www.51nod.com/Challenge/Problem.html#problemId=2103
#include <iomanip>
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT double f;
  int d;
  cin >> f >> d;
  cout << fixed << setprecision(d) << f << endl;
  return 0;
}