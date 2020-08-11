// Link: https://www.51nod.com/Challenge/Problem.html#problemId=3198
#include <algorithm>
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
struct node {
  string Name;
  int Fraction;
  int Ranking;
  int Sequence;
} arr[10010];
bool CmpFraction(node a, node b) { return a.Fraction > b.Fraction; }
bool CmpSequence(node a, node b) { return a.Sequence < b.Sequence; }
int main() {
  BT int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i].Name >> arr[i].Fraction;
    arr[i].Sequence = i;
  }
  sort(arr, arr + n, CmpFraction);
  int old = -1;
  for (int i = 0; i < n; i++) {
    if (arr[i].Fraction == old)
      arr[i].Ranking = arr[i - 1].Ranking;
    else
      arr[i].Ranking = i + 1;
    old = arr[i].Fraction;
  }
  sort(arr, arr + n, CmpSequence);
  for (int i = 0; i < n; i++)
    cout << arr[i].Name << " " << arr[i].Ranking << endl;
  return 0;
}