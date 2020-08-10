#include <iostream>
using namespace std;
int n, nums[5], pos;
int is_conti() {
  int imax = 0;
  for (int i = 0; i < 5; i++)
    if (nums[i] < imax) {
      imax = nums[i];
      pos = i;
    }
  return imax;
}
int main() {
  cin >> n;
  for (int t = 1; t <= n; t++) {
    for (int i = 0; i < 5; i++) cin >> nums[i];
    while (is_conti() < 0) {
      int p_next = pos + 1, p_back = pos - 1;
      nums[pos] = -nums[pos];
      if (p_next == 5) p_next = 0;
      if (p_back == -1) p_back = 4;
      nums[p_back] -= nums[pos];
      nums[p_next] -= nums[pos];
    }
    cout << "Pentagon #" << t << ":\n" << nums[0] << " " << nums[1] << " "
         << nums[2] << " " << nums[3] << " " << nums[4] << "\n"
         << endl;
  }
  return 0;
}