//https://atcoder.jp/contests/abs/submissions/48995726
#include <iostream>
#include <vector>
using namespace std;
int main(){
  int A,B,C,X;
  cin >> A >> B >> C >> X;
  int ans = 0;
  for (int a = 0; a <= A; a++) {
    for (int b = 0; b <= B; b++) {
      for (int c = 0; c <= C; c++) {
        int sum = 500*a + 100*b + 50*c; // 合計金額
        if (sum == X) {// 合計金額が X に一致したら答えを加算
          ans++;
        } 
      }
    }
  }
  cout << ans << endl;
}