"""
에라토스테네스의 체를 이용하여 k번째로 지워지는 값을 찾는다.
"""

n, k = map(int, input().split())
check = [False, False] + [True]*(n-1)

for i in range(2, n+1):
    for j in range(i, n+1, i):
        if check[j]:
            check[j] = False
            k -= 1
            if k == 0:
                print(j)
                exit()
