// Link:https://www.51nod.com/Challenge/Problem.html#problemId=1009
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT int n, ans = 0, a = 1;
  cin >> n;
  while (n / a) {
    // 例如121第2位的时候
    int low_num = n - (n / a) * a;  // 低位1
    int high_num = n / (a * 10);    //高位1
    int cur_num = (n / a) % 10;     //当前位2
    switch (cur_num) {
      case 0:
        ans += high_num * a;  // 如果这一位为0，比如101，这一位会出现10次1
        break;
      case 1:
        ans +=
            high_num * a + low_num +
            1;  //如果这一位是1，比如112，首先0的时候出现的现在都会出现，而低位的数因为当前位是1，都会出现。
        break;
      default:
        ans += (high_num + 1) * a;  //大于1的时候，包含了1的所有情况，即1*a;
        break;
    }
    a *= 10;
  }
  cout << ans << endl;
  return 0;
}