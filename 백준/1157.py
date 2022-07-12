a = input().upper()
words = list(set(a))
# M i s p

cnt_li=list()
for i in words:
    cnt = a.count(i)  # M갯수, i갯수, s갯수, p갯수
    cnt_li.append(cnt)

if cnt_li.count(max(cnt_li)) > 1:  # 최대 갯수 값이 2개 이상
    print('?')
else:
    max_index = cnt_li.index(max(cnt_li))  # 최대값의 위치
    print(words[max_index])
