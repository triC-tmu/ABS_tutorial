#https://atcoder.jp/contests/abs/submissions/49019767
N, Y = map(int, input().split())

ans10000 = -1
ans5000 = -1
ans1000 = -1

for i in range(N+1): #10000円の枚数を 0 〜 N で調べる
    for j in range(N+1 -i): #5000円の枚数を 0 〜 N-i で調べる
        k = N - i - j
        if 10000 * i + 5000 * j + 1000 * k == Y:#答えが見つかった
            ans10000 = i
            ans5000 = j
            ans1000 = k

print(ans10000,ans5000,ans1000) 