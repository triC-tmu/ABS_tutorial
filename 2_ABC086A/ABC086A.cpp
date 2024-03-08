//https://atcoder.jp/contests/abs/submissions/48981663
#include <iostream>
using namespace std;
int main(){
  int a,b;cin >> a >> b;
  if((a * b) % 2 == 1){
    cout << "Odd" << endl;
  }else{
    cout << "Even" << endl;
  }
}