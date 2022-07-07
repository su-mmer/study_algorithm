# 각 숫자가 2개씩 있어야 함

x = list()
y = list()

# list x, y에 각각 x좌표, y좌표를 넣음 
for i in range(3):
    a, b = map(int, input().split())
    x.append(a)
    y.append(b)

# 각 좌표의 list에서 한 개만 있는 좌표를 a, b에 저장
for i in range(3):
    if x.count(x[i])==1:
        a = x[i]
    if y.count(y[i])==1:
        b = y[i]

print(a, b)
