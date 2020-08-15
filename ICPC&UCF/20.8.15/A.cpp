#include <iostream>

using namespace std;

int GetSum(string a) {
  int sum = 0, weight = 1;
  for (int i = a.length() - 1; i >= 0; i--) {
    if (a[i] >= '0' && a[i] <= '9') {
      sum += (a[i] - '0') * weight;
      weight *= 10;
    } else {
      sum += a[i];
      weight = 1;
    }
  }
  return sum;
}

int main() {
  string as, s;
  int n;
  cin >> n >> as;
  int Sums = GetSum(as);
  while (n--) {
    cin >> s;
    if (GetSum(s) == Sums)
      as < s ? cout << "-" << endl : cout << "+" << endl;
    else if (GetSum(s) > Sums)
      cout << "+" << endl;
    else
      cout << "-" << endl;
  }
  return 0;
}