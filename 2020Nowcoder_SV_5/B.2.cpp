#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
const int maxn = 200020;
struct node_edge {
  int vertex, weight;
};
vector<node_edge> Edge[maxn];

int main() {
  int n, start, end, weight;
  cin >> n;
  for (int i = 1; i < n; i++) {
    cin >> start >> end >> weight;
    // 每个点存，可以到达的点以及这之间的权值
    Edge[start].push_back({end, weight});
    Edge[end].push_back({start, weight});
  }




  return 0;
}