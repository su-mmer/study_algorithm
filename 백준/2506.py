n = int(input())
exam = list(input().split())

score = 0
index = -1
for i in exam:
    if i == '1':
        index += 1
        score += 1 + index
    else:
        index = -1

print(score)
