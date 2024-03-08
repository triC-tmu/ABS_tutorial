//https://atcoder.jp/contests/abs/submissions/me
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
  int N;
  cin >> N;
  vector<int> d(N);
  for(int i = 0;i < N;i++){
    cin >> d[i];
  }
  set<int> values;
  for(int i = 0;i < N;i++){
    values.insert(d[i]);
  }
  cout << values.size() << endl;
}