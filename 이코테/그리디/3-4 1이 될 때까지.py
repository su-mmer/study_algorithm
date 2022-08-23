n, k = map(int, input().split())
result = 0

while True:
    # (n==k로 나누어 떨어지는 수)가 될 때까지 1씩 빼기
    target = (n//k) * k  # n을 나누어 떨어지는 수로 만든 게 target
    result += (n-target)  # 나누어 떨어지는 수가 될 때까지 1을 빼야할 횟수
    n = target  # 이제 n은 나누어 떨어지는 수가 됨
    # n이 k보다 작을 때(더 이상 나눌 수 없을 때) 반복문 탈출
    if n < k:
        break
    # k로 나누기
    result += 1
    n //= k

# 마지막으로 남은 수에 대하여 1씩 빼는 횟수 더해주기
result += (n-1)
print(result)
