n, m, k = map(int, input().split())
arr = list(map(int, input().split()))

arr. sort()
first = arr[-1]
second = arr[-2]

# 가장 큰 수가 더해지는 횟수
count = int(m / (k + 1)) * k  # 반복되는 수열의 길이 K+1만큼 나눈 몫 m / (k+1)이 반복되는 횟수.
count += m % (k + 1)  # k+1로 나눈 나머지 만큼의 크기는 가장 큰 수를 더해주어야 함

sum = 0
sum += (count) * first  # 횟수만큼 가장 큰 값을 더해준다.
sum += (m - count) * second  # 가장 큰 수를 더해주는 횟수를 제외하고 두번째로 큰 수를 더해준다.

print(sum)
