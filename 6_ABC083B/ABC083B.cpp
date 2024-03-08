//https://atcoder.jp/contests/abs/submissions/48995985
#include <iostream>
using namespace std;

int main(){
  int N,A,B;
  cin >> N >> A >> B;
  int ans = 0;
  for(int i = 0;i <= N;i++){
    int digit_sum = 0; //iの各桁の和を格納する
    int val = i;  
    while(val > 0){// valが0になるまで
      digit_sum += val % 10;
      val /= 10;
    }
    if(A <= digit_sum && digit_sum <= B){//iの各桁の和が A以上B以下かどうか
      ans += i;
    }
  }
  cout << ans << endl;
}