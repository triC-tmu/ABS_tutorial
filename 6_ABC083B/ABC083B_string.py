#https://atcoder.jp/contests/abs/submissions/48997396
N, A, B = map(int, input().split())

ans = 0

for i in range(1,N+1):
  s = str(i)#iを文字列にする
  digit_sum = 0
  for c in s: 
    digit_sum += int(c) # 数字にする
  if A <= digit_sum and digit_sum <= B:
    ans += i
print(ans)