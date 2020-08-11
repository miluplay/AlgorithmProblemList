// https://www.51nod.com/Challenge/Problem.html#problemId=2050
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT int n;
  cin >> n;
  if (n > 0 && n < 4)
    cout << "infant" << endl;
  else if (n < 13)
    cout << "child" << endl;
  else if (n < 19)
    cout << "youngster" << endl;
  else if (n < 26)
    cout << "youth" << endl;
  return 0;
}