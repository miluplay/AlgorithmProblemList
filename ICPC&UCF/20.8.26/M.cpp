#include <algorithm>
#include <iostream>
using namespace std;
struct node {
  int a, b;
} arr[111];
int main() {
  int n, i;
  cin >> n;
  for (i = 0; i < n; i++) cin >> arr[i].a >> arr[i].b;
  for (i = n; i >= 0; i--) {
    int nums = 0;
    for (int j = 0; j < n; j++)
      if (i >= arr[j].a && i <= arr[j].b) nums++;
    if (nums >= i) {
      cout << i << endl;
      return 0;
    }
  }
  cout << i << endl;
  return 0;
}