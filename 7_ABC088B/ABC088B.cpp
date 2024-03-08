//https://atcoder.jp/contests/abs/submissions/48998474
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i = 0;i < N ;i++){
    cin >> a[i];
  }
  sort(a.begin(),a.end());//昇順にソート
  reverse(a.begin(),a.end());//降順にする
  int Alice = 0;
  int Bob = 0;
  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) { // Alice のターン
      Alice += a[i];
    }
    else { // Bob のターン
      Bob += a[i];
    }
  }
  cout << Alice - Bob << endl;
}