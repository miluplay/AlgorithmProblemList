// Link:https://www.51nod.com/Challenge/Problem.html#problemId=2039
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
#define ll long long
using namespace std;
// struct pair_hash {
//   template <class T1, class T2>
//   size_t operator()(pair<T1, T2> const &pair) const {
//     size_t h1 = hash<T1>()(pair.first);
//     size_t h2 = hash<T2>()(pair.second);
//     return h1 ^ h2;
//   }
// };
// unordered_set<pair<int, int>, pair_hash> MyMap;
struct hash_pair {
  template <class T1, class T2>
  size_t operator()(const pair<T1, T2>& p) const {
    auto hash1 = hash<T1>{}(p.first);
    auto hash2 = hash<T2>{}(p.second);
    return hash1 ^ hash2;
  }
};
unordered_map<pair<int, int>, bool, hash_pair> MyMap;
int main() {
  BT ll n;
  int dir, x, y;
  cin >> n;
  dir = x = y = 0;
  MyMap.clear();
  MyMap[{x, y}] = true;  //黑色
  while (n--) {
    switch (dir) {
      case 0:  //向右
        x += 1;
        if (MyMap[{x, y}])
          dir = 3;  //右转向下
        else
          dir = 1;  //左转向上
        MyMap[{x, y}] = !MyMap[{x, y}];
        break;
      case 1:  //向上
        y += 1;
        if (MyMap[{x, y}])
          dir = 0;  //右转向右
        else
          dir = 2;  //左转向左
        MyMap[{x, y}] = !MyMap[{x, y}];
        break;
      case 2:  //向左
        x -= 1;
        if (MyMap[{x, y}])
          dir = 1;  //右转向上
        else
          dir = 3;  //左转向下
        MyMap[{x, y}] = !MyMap[{x, y}];
        break;
      case 3:  //向下
        y -= 1;
        if (MyMap[{x, y}])
          dir = 2;  //右转向左
        else
          dir = 0;  //左转向右
        MyMap[{x, y}] = !MyMap[{x, y}];
        break;
    }
  }
  cout << x << " " << y << endl;
  return 0;
}