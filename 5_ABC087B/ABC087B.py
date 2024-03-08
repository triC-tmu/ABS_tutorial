#https://atcoder.jp/contests/abs/submissions/48995353
A = int(input())
B = int(input())
C = int(input())
X = int(input())

ans = 0

for a in range(A+1):
    for b in range(B+1):
        for c in range(C+1):
            sum = 500*a + 100*b + 50*c #合計金額
            if sum == X:# 合計金額が X に一致したら答えを加算
                ans += 1

print(ans)