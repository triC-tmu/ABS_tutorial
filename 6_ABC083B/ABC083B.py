#https://atcoder.jp/contests/abs/submissions/48997227
N, A, B = map(int, input().split())

ans = 0

for i in range(1,N+1):
    val = i
    digit_sum = 0
    while val > 0: # valが0になるまで
        digit_sum += val % 10
        val //= 10
    if A <= digit_sum and digit_sum <= B:#iの各桁の和が A以上B以下かどうか
        ans+= i
print(ans)
