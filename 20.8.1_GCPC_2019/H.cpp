//http://acm.upc.edu.cn/OnlineJudge/contest.php?cid=1021
// 题目描述
// Kai is listening to his favourite jazz playlist. He likes to turn on crossfading between songs, so during the last seconds of a song, it will slowly fade out while the next one fades in. 
// This happens between any two consecutive songs, but the beginning of the first song and the end of the last song will be played normally.
// Determine the total amount of time it takes Kai to listen to the whole playlist.
// 输入
// The input consists of:
// • Two integers n and c (1 ≤ n ≤ 100, 1 ≤ c ≤ 10), giving the number of songs and the crossfade time in seconds.
// • n lines of the form m:ss (0:30 ≤ m:ss ≤ 9:59), giving the song lengths (with one digit for the number of whole minutes and two digits for the remaining seconds).
// 输出
// Output a string of the form hh:mm:ss, giving the total time it takes to listen through the whole playlist (with two digits for the number of whole hours, two digits for the number of remaining whole minutes, and two digits for the remaining seconds).

#include <iostream>
using namespace std;
int main() {
  int n, c, ans = 0;
  string temp;
  cin >> n >> c;
  ans -= c * (n - 1);
  while (n--) {
    cin >> temp;
    ans += (temp[0] - '0') * 60 + (temp[2] - '0') * 10 + (temp[3] - '0');
  }
  printf("%02d:%02d:%02d\n", ans / 3600, (ans % 3600) / 60, ans % 60);
  return 0;
}