"""
주어진 N개 중에서 소수가 몇 개인지 찾아서 출력한다.
"""

n = int(input())
num = list(map(int, input().split()))
cnt = 0
check = [True] * (n)

for i in range(n):
    if num[i] > 1:
        for j in range(2, num[i]):
            if num[i] % j == 0:
                check[i] = False
                break
    else:
        check[i] = False

for i in check:
    if i:
        cnt += 1

print(cnt)
