#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 1e5 + 5, maxm = 2e5 + 5;
int head[maxn], nume;
struct edge {
  int v, w, c, next;
} e[maxm];  // v顶点,w权值,c花费
inline void init_edge() {
  memset(head, -1, sizeof head);
  nume = 0;
}  // !!!
inline void add_edge(int u, int v, int w = 0, int c = 0) {
  e[nume].v = v;
  e[nume].w = w;
  e[nume].c = c;
  e[nume].next = head[u];
  head[u] = nume++;
}
int vis[maxn], num[maxn];
void dfs(int u) {
  for (int i = head[u]; ~i; i = e[i].next) {
    int v = e[i].v, w = e[i].w;
    if (vis[v] == 0) {
      vis[v] = 1;
      num[v] = num[u] ^ w;
      dfs(v);
    }
  }
}
int tt = 0;
int s[3000005][2], Pow[3000005];
void add(int p, int w, int u) {
  int t;
  if (p == 0) return;
  if (w & p)
    t = 1;
  else
    t = 0;
  if (s[u][t] == -1) s[u][t] = ++tt, Pow[tt] = p;
  add(p >> 1, w, s[u][t]);
}
long long link(int u, int v) {
  if (s[u][0] == -1 && s[u][1] == -1) return 0;
  if (~s[u][0] && ~s[u][1] && ~s[v][0] && ~s[v][1])
    return min(link(s[u][0], s[v][0]), link(s[u][1], s[v][1]));
  if (~s[u][0] && ~s[v][0]) return link(s[u][0], s[v][0]);
  if (~s[u][1] && ~s[v][1]) return link(s[u][1], s[v][1]);
  if (~s[u][1] && ~s[v][0]) return link(s[u][1], s[v][0]) + Pow[s[u][1]];
  if (~s[u][0] && ~s[v][1]) return link(s[u][0], s[v][1]) + Pow[s[u][0]];
}
long long gao(int u) {
  long long ans = 0;
  if (s[u][0] != -1) ans += gao(s[u][0]);
  if (s[u][1] != -1) ans += gao(s[u][1]);
  if (s[u][0] != -1 && s[u][1] != -1)
    ans += link(s[u][0], s[u][1]) + Pow[s[u][0]];
  return ans;
}
int n, u, v, w;
int main() {
  init_edge();
  scanf("%d", &n);
  for (int i = 1; i < n; i++) {
    scanf("%d%d%d", &u, &v, &w);
    add_edge(u, v, w);
    add_edge(v, u, w);
  }
  num[0] = 0;
  vis[u] = 1;
  memset(vis, 0, sizeof vis);
  dfs(0);
  memset(s, -1, sizeof s);
  for (int i = 0; i < n; i++) add(1 << 29, num[i], 0);
  printf("%lld", gao(0));
}