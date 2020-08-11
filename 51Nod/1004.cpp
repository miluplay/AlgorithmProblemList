// Link:https://www.51nod.com/Challenge/Problem.html#problemId=1004
/*
1
2 4 8 6
3 9 7 1
4 6
5
6
7 9 3 1
8 4 2 6
9 1
*/
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int arr[13];
int main() {
  BT int n, t, a = 1;
  cin >> n;
  t = n % 10;
  for (int i = 0; i <= 12; i++) {
    arr[i] = a;
    a *= t;
    a %= 10;
  }
  arr[0] = arr[12];
  cout << arr[n % 12] << endl;
  return 0;
}