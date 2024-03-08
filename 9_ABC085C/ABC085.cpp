//https://atcoder.jp/contests/abs/submissions/49019615
#include<iostream>
using namespace std;
int main(){
  int N,Y;cin >> N >> Y;
  int ans100000 = -1,ans5000 = -1,ans1000 = -1;
  for(int i = 0; i <= N;i++){// 10000円の枚数を 0 〜 N で調べる
    for(int j = 0;i + j <= N;j++){// 5000円の枚数を 0 〜 N-i で調べる
      int k = N - i - j;//1000円の枚数
      int sum = 10000 * i + 5000 * j + 1000 * k;
      if(sum == Y){//答えが見つかった
        ans100000 = i;
        ans5000 = j;
        ans1000 = k;
      }
    }
  }
  cout << ans100000 << " " << ans5000 << " " << ans1000 << endl;
}