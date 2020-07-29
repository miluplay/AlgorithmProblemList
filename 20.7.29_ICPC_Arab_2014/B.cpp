#include <iostream>
using namespace std;
string str[6] = {"Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh"};
int main() {
  int t, a, b;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> a >> b;
    if (a < b) {
      a += b;
      b = a - b;
      a -= b;
    }
    cout << "Case " << i << ": ";
    if (a == 1 && b == 1)
      cout << "Habb Yakk" << endl;
    else if (a == 2 && b == 2)
      cout << "Dobara" << endl;
    else if (a == 3 && b == 3)
      cout << "Dousa" << endl;
    else if (a == 4 && b == 4)
      cout << "Dorgy" << endl;
    else if (a == 5 && b == 5)
      cout << "Dabash" << endl;
    else if (a == 6 && b == 6)
      cout << "Dosh" << endl;
    else if (a == 6 && b == 5)
      cout << "Sheesh Beesh" << endl;
    else {
      cout << str[a - 1] << " " << str[b - 1] << endl;
    }
  }
  return 0;
}