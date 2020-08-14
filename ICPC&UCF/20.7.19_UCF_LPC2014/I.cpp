#include <cstring>
#include <iostream>
using namespace std;
int arr[8];
int sum[1111];
int main() {
  int T, n;
  cin >> T;
  cin >> T;
  for (int c = 1; c <= T; c++) {
    for (int i = 0; i < 8; i++) cin >> arr[i];
    cin >> n;
    memset(sum, 0, sizeof(sum));
    for (int i = 0; i < 8; i++) {
      int t = arr[i];
      while (t < n) {
        sum[t]++;
        t += arr[i];
      }
    }
    cout << "Equation #" << c << ": " << sum[n] << endl;
  }
  return 0;
}
