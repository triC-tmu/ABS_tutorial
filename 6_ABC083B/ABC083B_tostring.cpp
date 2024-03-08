//https://atcoder.jp/contests/abs/submissions/48995817
#include <iostream>
using namespace std;
int main(){
  int N,A,B;
  cin >> N >> A >> B;
  int ans = 0;
  for(int i = 1;i <= N;i++){
    string s = to_string(i);//iを文字列にする
    int digit_sum = 0;
    for(int j = 0;j < s.size();j++){
      digit_sum += s[j] - '0';
    }
    if(A <= digit_sum && digit_sum <= B){
      ans+= i;
    }
  }
  cout << ans << endl;
}