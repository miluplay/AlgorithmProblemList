// https://www.jisuanke.com/contest/10439

#include <iostream>
using namespace std;
int main() {
  int n, i = 0, sum = 0;
  while (true) {
    cin >> n;
    if (n == 0) break;
    sum += n;
    i++;
    if (sum < 50)
      continue;
    else
      cout << "Input #" << i << ": ";
    if (sum < 100)
      cout << "Sweet!" << endl;
    else
      cout << "Totally Sweet!" << endl;
    while (sum >= 50) sum -= 50;
  }
  return 0;
}