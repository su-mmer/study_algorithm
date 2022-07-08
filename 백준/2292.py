#-*- encoding: utf-8 -*-
# 1 -> 방 1개
# 2~7 -> 방 2개 6
# 8~19 -> 방 3개 12
# 20~37 -> 방 4개 18
# 38 ~61 -> 방 5개 24

num = int(input())  # 입력 받은 방번호
room_num = 1  # 현재 방 번호
cnt = 1  # 방 몇개

while 1:
    if num <= room_num:
        print(cnt)
        break
    else:
        room_num+=6*cnt
        cnt+=1
