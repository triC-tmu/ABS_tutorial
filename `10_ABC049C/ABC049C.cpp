//https://atcoder.jp/contests/abs/submissions/49029384
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  string S;
  cin >> S;
  // 後ろから見るためにすべての文字列を反転する
  reverse(S.begin(),S.end());
  vector<string> words = {"dream","dreamer","erase","eraser"};
  for(int i = 0;i < 4;i++){
    reverse(words[i].begin(),words[i].end());
  }

  bool able = true;
  for(int i = 0;i < S.size();){
    bool dividable = false;// 4 個の文字列どれかで divide できるか
    for(int j = 0;j < 4;j++){
      string word = words[j];
      if(S.substr(i,word.size()) == word){// divide できたら i を進める
        dividable = true;
        i += word.size();
        break;
      }
    }
    if(!dividable){// divide できなかった
      able = false;
      break;
    }
  }

  if(able){
    cout << "YES" << endl;
  } else{
    cout << "NO" << endl; 
  }

}
