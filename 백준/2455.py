# 1번역부터 4번역까지 있음
# 종착역까지의 각 역 중에 사람이 가장 많을 때의 사람 수 계산

li = list()
sum = 0

for i in range(4):
    a, b = map(int, input().split())
    sum = sum - a + b
    li.append(sum)

print(max(li))
