// Link:https://www.51nod.com/Challenge/Problem.html#problemId=2093
#include <algorithm>
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int arr[100010];
int main() {
  BT int n;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> arr[i];
  sort(arr, arr + n);
  cout << arr[0] << " " << arr[n - 1] << endl;
  return 0;
}