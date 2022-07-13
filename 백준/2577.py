a = int(input())
b = int(input())
c = int(input())
sum = list(map(int, str(a*b*c)))

cnt = list(range(0,10))
cnt_li = list(0 for _ in range(10))
# print(cnt_li)

for i in sum:
    cnt_li[i] += 1

for i in cnt_li:
    print(i)
