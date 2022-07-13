num = list(map(int, input().split()))

li = list(range(1,9))

if num == li:
    print("ascending")
elif num[::-1] == li:
    print("descending")
else:
    print("mixed")
