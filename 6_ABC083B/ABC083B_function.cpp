//https://atcoder.jp/contests/abs/submissions/48997092
#include <iostream>
using namespace std;

//各桁の和を計算する関数
int sumOfDigits(int n){
  int digit_sum = 0;
  while(n > 0){//nが0になるまで
    digit_sum += n % 10;
    n /= 10;
  }
  return digit_sum;
}

int main(){
  int N,A,B;
  cin >> N >> A >> B;
  int ans = 0;
  for(int i = 0;i <= N;i++){
    int digit_sum = sumOfDigits(i);
    if(A <= digit_sum && digit_sum <= B){//iの各桁の和が A以上B以下かどうか
      ans += i;
    }
  }
  cout << ans << endl;
}