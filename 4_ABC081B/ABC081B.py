#https://atcoder.jp/contests/abs/submissions/48987832
n = int(input())
a = list(map(int, input().split()))

cnt = 0 #操作回数

while True:
    all_even = True #配列aの要素がすべて偶数かどうかを判定するフラグ
    for i in range(len(a)):
        if a[i] % 2  != 0:
            all_even = False #奇数があったのでフラグを下ろす

    if all_even == False: #配列内が全て偶数の条件を満たさないならbreak
        break
    
    for i in range(len(a)):  #操作を行えるなら実際に行う
        a[i]/= 2

    cnt+= 1 #操作回数を増やす

print(cnt)
