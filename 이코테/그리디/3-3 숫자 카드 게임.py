n, m = map(int, input().split())
data = []

for i in range(n):
    arr = list(map(int, input().split()))
    data.append(min(arr))

print(max(data))
