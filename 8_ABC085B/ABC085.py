#https://atcoder.jp/contests/abs/submissions/49007211
N = int(input())

d = [int(input()) for _ in range(N)]

num = [0]*101 #num[i] :値iが何個あるか
for v in d:
    num[v]+= 1

ans = 0
for i in range(1,101) : #1 <= d[i] <= 100 なので 1 から 100 まで探索
    if num[i] >= 1: #少なくとも1個 i があれば
        ans+= 1
print(ans)