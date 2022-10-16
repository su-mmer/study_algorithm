"""
1. m이상 n이하의 소수를 모두 출력한다.
2. 한 줄에 하나씩 증가하는 순서대로 출력한다.
"""

m, n = map(int, input().split())

check = [False, False] + [True]*(n-1) # 0~16
num = list(range(m, n+1)) # 3~16

for i in range(2, n+1):
    if check[i]:
        for j in range(i*2, n+1, i):
            check[j] = False

for i in num:
    if check[i]:
        print(i)
