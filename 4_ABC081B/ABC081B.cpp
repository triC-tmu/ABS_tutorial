//https://atcoder.jp/contests/abs/submissions/48987948
#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n;cin >> n;
  vector<int> a(n);
  for(int i = 0;i < n;i++){
    cin >> a[i];
  }
  int cnt = 0;
  //操作が行える限り操作を繰り返す
  while(true){
    bool all_even = true;//配列aの要素がすべて偶数かどうかを判定するフラグ
    for(int i = 0;i < n;i++){
      if(a[i] % 2 != 0){
        all_even = false;//奇数があったのでフラグを下ろす
      }
    }
    if(all_even == false){
      break;
    }
    for(int i = 0;i < n;i++){//操作を行えるなら実際に行う
      a[i]/= 2;
    }
    cnt++; //操作回数を増やす
  }
  cout <<cnt << endl;
}