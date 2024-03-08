#https://atcoder.jp/contests/abs/submissions/48998553
N = int(input())
a = list(map(int, input().split()))

a.sort(reverse=True) #降順ソート

Alice = 0
Bob = 0

for i in range(N):
    if i % 2 == 0: #Aliceのターン
        Alice += a[i]
    else:          #Bobのターン
        Bob += a[i]

print(Alice - Bob)