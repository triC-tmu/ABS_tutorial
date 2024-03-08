#https://atcoder.jp/contests/abs/submissions/49040799
N = int(input())
prev_t, prev_x, prev_y = 0, 0, 0

able = True

for _ in range(N):#入力を受け取りながら処理をする
    t, x, y = map(int, input().split())
    dist = abs(x - prev_x) + abs(y - prev_y)
    dt = t - prev_t

    if dist > dt : #そもそも時間が足りなくてたどり着けない
        able = False
    if dist % 2 != dt % 2: # dist と dt の偶奇は一致する必要がある
        able = False
    prev_t, prev_x, prev_y = t, x, y #prev_t, prev_x, prev_yをそれぞれ更新しておく

if able == True:
    print("Yes")
else :
    print("No")