// https://www.51nod.com/Challenge/Problem.html#problemId=1959
#include <iostream>
#include <unordered_set>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
unordered_set<int> arr;
int main() {
  BT int n, sum = 0;
  while (cin >> n && n) arr.insert(n);
  for (unordered_set<int>::iterator i = arr.begin(); i != arr.end(); i++)
    if (arr.find(2 * *i) != arr.end()) sum++;
  cout << sum << endl;
  return 0;
}