#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT string Dictionary_bas, a, b;
  int Dictionary[26], Answer, n, i;
  cin >> Dictionary_bas;
  for (i = 0; i < 26; i++) Dictionary[Dictionary_bas[i] - 'a'] = i;
  cin >> n;
  while (n--) {
    cin >> a >> b;
    Answer = 2, i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
      if (Dictionary[a[i] - 'a'] == Dictionary[b[i] - 'a'])
        i++;
      else {
        Answer = Dictionary[a[i] - 'a'] < Dictionary[b[i] - 'a'] ? 1 : 0;
        break;
      }
    }
    if (Answer == 2)
      if (a[i] == '\0' && b[i] != '\0')
        Answer = 1;
      else
        Answer = 0;
    Answer == 1 ? cout << "green" << endl : cout << "red" << endl;
  }
  return 0;
}