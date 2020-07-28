// 一维数组表示二维数组#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

typedef long long LL;

int inMatrix[201000];
LL sumMatrix[201000];
int T, R, C, S;
LL array[201000];

inline int& inMatrixRef(int r, int c) { return inMatrix[r * (C + 1) + c]; }
inline LL& sumMatrixRef(int r, int c) { return sumMatrix[r * (C + 1) + c]; }

int main() {
  int i, j, k, in;
  freopen("sum.in", "r", stdin);

  scanf("%d", &T);
  while (T--) {
    scanf("%d%d%d", &R, &C, &S);
    if (R <= C) {
      for (i = 1; i <= R; ++i)
        for (j = 1; j <= C; ++j) {
          scanf("%d", &in);
          inMatrixRef(i, j) = in;
        }
    } else {
      R ^= C ^= R ^= C;
      for (i = 1; i <= C; ++i)
        for (j = 1; j <= R; ++j) {
          scanf("%d", &in);
          inMatrixRef(j, i) = in;
        }
    }
    memset(sumMatrix, 0, sizeof(sumMatrix));
    for (i = 1; i <= R; ++i)
      for (j = 1; j <= C; ++j)
        sumMatrixRef(i, j) = sumMatrixRef(i - 1, j) + inMatrixRef(i, j);
    int res = R * C + 100;
    for (i = 1; i <= R; ++i)
      for (j = 1; j <= C; ++j) {
        if (inMatrixRef(i, j) >= S) res = 1;
      }
    for (i = 0; i < R; ++i)
      for (j = i + 1; j <= R; ++j) {
        if (res <= (j - i)) break;
        for (k = 1; k <= C; ++k)
          array[k] = sumMatrixRef(j, k) - sumMatrixRef(i, k);
        LL sum = 0;
        int left = 1;
        int right = 1;
        while (right <= C) {
          if (left == right) {
            sum = sum + array[right];
            ++right;
          } else if (array[left] <= 0) {
            sum = sum - array[left];
            ++left;
          } else if (sum >= S) {
            sum = sum - array[left];
            ++left;
          } else {
            sum = sum + array[right];
            ++right;
          }
          if (left < right && sum >= S) {
            if (res > ((right - left) * (j - i)))
              res = ((right - left) * (j - i));
          }
        }
        while (left <= C) {
          if (sum >= S) {
            if (res > ((right - left) * (j - i)))
              res = ((right - left) * (j - i));
          }
          sum = sum - array[left];
          ++left;
        }
      }
    if (res > R * C) res = -1;
    cout << res << endl;
  }
  return 0;
}


#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

typedef long long LL;

int inMatrix[201000];
LL sumMatrix[201000];
int T, R, C, S;
LL array[201000];

inline int& inMatrixRef(int r, int c) { return inMatrix[r * (C + 1) + c]; }
inline LL& sumMatrixRef(int r, int c) { return sumMatrix[r * (C + 1) + c]; }

int main() {
  int i, j, k, in;
  freopen("sum.in", "r", stdin);

  scanf("%d", &T);
  while (T--) {
    scanf("%d%d%d", &R, &C, &S);
    if (R <= C) {
      for (i = 1; i <= R; ++i)
        for (j = 1; j <= C; ++j) {
          scanf("%d", &in);
          inMatrixRef(i, j) = in;
        }
    } else {
      R ^= C ^= R ^= C;
      for (i = 1; i <= C; ++i)
        for (j = 1; j <= R; ++j) {
          scanf("%d", &in);
          inMatrixRef(j, i) = in;
        }
    }
    memset(sumMatrix, 0, sizeof(sumMatrix));
    for (i = 1; i <= R; ++i)
      for (j = 1; j <= C; ++j)
        sumMatrixRef(i, j) = sumMatrixRef(i - 1, j) + inMatrixRef(i, j);
    int res = R * C + 100;
    for (i = 1; i <= R; ++i)
      for (j = 1; j <= C; ++j) {
        if (inMatrixRef(i, j) >= S) res = 1;
      }
    for (i = 0; i < R; ++i)
      for (j = i + 1; j <= R; ++j) {
        if (res <= (j - i)) break;
        for (k = 1; k <= C; ++k)
          array[k] = sumMatrixRef(j, k) - sumMatrixRef(i, k);
        LL sum = 0;
        int left = 1;
        int right = 1;
        while (right <= C) {
          if (left == right) {
            sum = sum + array[right];
            ++right;
          } else if (array[left] <= 0) {
            sum = sum - array[left];
            ++left;
          } else if (sum >= S) {
            sum = sum - array[left];
            ++left;
          } else {
            sum = sum + array[right];
            ++right;
          }
          if (left < right && sum >= S) {
            if (res > ((right - left) * (j - i)))
              res = ((right - left) * (j - i));
          }
        }
        while (left <= C) {
          if (sum >= S) {
            if (res > ((right - left) * (j - i)))
              res = ((right - left) * (j - i));
          }
          sum = sum - array[left];
          ++left;
        }
      }
    if (res > R * C) res = -1;
    cout << res << endl;
  }
  return 0;
}
