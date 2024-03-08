#https://atcoder.jp/contests/abs/submissions/48997326
def sumOfDigits(n):
    digit_sum = 0
    while(n > 0):# nが0になるまで
        digit_sum += n % 10
        n //= 10
    return digit_sum

N, A, B = map(int, input().split())

ans = 0

for i in range(1,N+1):
    digit_sum = sumOfDigits(i)
    if A <= digit_sum and digit_sum <= B:#iの各桁の和が A以上B以下かどうか
        ans+= i
print(ans)
