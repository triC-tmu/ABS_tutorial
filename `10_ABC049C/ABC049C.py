#https://atcoder.jp/contests/abs/submissions/49034546
S = input()
#後ろから見るためにすべての文字列を反転する
S = S[::-1]
words = ["dream", "dreamer", "erase", "eraser"]
words = [word[::-1] for word in words]

able = True
i = 0
while i < len(S):
    dividable = False # 4 個の文字列どれかで divide できるか
    for word in words:
        if S[i:i + len(word)] == word:#divide できたら i を進める
            dividable = True
            i += len(word)
            break
    if dividable == False:#divide できなかった
        able = False
        break
    
if able:
    print("YES")
else :
    print("NO")