// Link:https://www.51nod.com/Challenge/Problem.html#problemId=2092
#include <iostream>
#include <stack>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT stack<int> s;
  int n, t;
  cin >> n;
  while (n--) {
    cin >> t;
    s.push(t);
  }
  cout << s.size() << endl;
  while (!s.empty()) {
    cout << s.top() << endl;
    s.pop();
  }
  return 0;
}