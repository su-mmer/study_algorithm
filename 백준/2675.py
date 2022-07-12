test = int(input())

for _ in range(test):
    r, s = input().split()
    for j in s:
        print(j*int(r), end='')
    print()
