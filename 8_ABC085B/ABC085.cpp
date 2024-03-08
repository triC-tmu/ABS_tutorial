//https://atcoder.jp/contests/abs/submissions/49006597
#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> d(N);
  for(int i = 0;i < N;i++){
    cin >> d[i];
  }
  vector<int> num(101); // num[i] :値iが何個あるか
  for(int i = 0;i < N;i++){
    num[d[i]]++;
  }
  int ans = 0;
  for(int i = 1;i <= 100;i++){// 1 <= d[i] <= 100 なので 1 から 100 まで探索
    if(num[i] >= 1){//少なくとも1個 i があれば
      ans++;
    }
  }
  cout << ans << endl;
}