s = input()
alphabet = list(-1 for _ in range(26))  # -1을 담을 list

cnt = 0  # s 중 몇 번째 알파벳인지
for i in s:
    integer = ord(i)-97  # 알파벳을 아스키코드로 변환
    if alphabet[integer] == -1:
        alphabet[integer] = cnt
    cnt += 1

print(*alphabet, sep=' ')
