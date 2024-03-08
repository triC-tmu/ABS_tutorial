#https://atcoder.jp/contests/abs/submissions/48983672
a,b = map(int,input().split())
if (a * b) % 2 == 1:
  print('Odd')
else:
  print('Even')