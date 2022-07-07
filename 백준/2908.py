a, b = input().split()

a = int(a[::-1]) # 슬라이스
b = int(b[::-1])

if a < b:
    print(b)
else:
    print(a)
