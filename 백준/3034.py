# 성냥이 박스 안에 대각선으로 들어갈 수도 있다

import math

n, w, h = map(int, input().split())
d = math.sqrt(w*w+h*h)  # 대각선의 길이

for i in range(n):
    x = int(input())
    if x<=w or x<=h or x<=d:
        print("DA")
    else:
        print("NE")
