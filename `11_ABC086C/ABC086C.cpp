//https://atcoder.jp/contests/abs/submissions/49040640
#include <iostream> 
#include <vector>
using namespace std;
int main(){
  int N;
  cin >> N;
  vector<int> t(N+1),x(N+1),y(N+1);//配列の値は何も指定しないとすべて0になっている
  for(int i = 0;i < N;i++){
    cin >> t[i+1] >> x[i+1] >> y[i+1];//0番目は初期状態として利用したいので1番目から格納する
  }

  bool able = true;
  for(int i = 0;i < N;i++){
    int dt = t[i+1] - t[i];
    int dist = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
    if(dt < dist){ //そもそも時間が足りなくてたどり着けない
      able = false;
    }
    if(dist % 2 != dt % 2){// dist と dt の偶奇は一致する必要がある
      able = false;
    }
  }

  if(able){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}