// Link:https://www.51nod.com/Challenge/Problem.html#problemId=2094
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int arr[100010];
int main() {
  BT int n;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> arr[i];
  cout << n << endl;
  for (int i = 1; i < n; i++) arr[i] += arr[i - 1];
  for (int i = 0; i < n; i++) cout << arr[i] << endl;
  return 0;
}