# 주어진 수들을 M번 더하여 가장 큰 수를 만든다.
# 특정 숫자가 연속해서 K번을 초과하여 더해질 수 없다.
# 중복되는 숫자는 서로 다른 것으로 간주한다.

# 배열의 크기 n, 숫자가 더해지는 횟수 M, 최대 연속 횟수 K
n, m, k = map(int, input().split())
# 자연수 배열
arr = list(map(int, input().split()))

arr.sort()
first = arr[-1]  # 가장 큰 값
second = arr[-2]  # 두 번째로 큰 값

sum = 0
while True:
    # k 횟수만큼 더함
    for _ in range(k):
        if m == 0:  # 남은 횟수
            break
        sum += first
        m -= 1  # 더해지는 횟수 -1
    # 두 번째로 작은 수를 한 번 더함
    if m == 0:
        break
    sum += second
    m -= 1

print(sum)
