#include <cstdio>
using namespace std;
int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", a);    // int
  printf("%s", a);    // string
  printf("%c", a);    // char
  printf("%lf", a);   // double
  printf("%lld", a);  // long long
  printf("%u", a);    // unsigned int
  printf("%lu", a);   // unsigned long long

  printf("%02d:%02d", a, b);  //时间格式
  printf("%.5lf", a);         //保留小数
  return 0;
}