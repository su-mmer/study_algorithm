n = int(input())
li = list()

for _ in range(n):
    li.append(int(input()))

li.sort()
print(*li, sep='\n')
