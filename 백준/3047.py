# A<B<C가 주어졌을 때 입력 순서대로 출력하라

li = list(map(int, input().split()))
se = input()

li.sort() # 순서대로 A, B, C가 됨

for i in range(3):
    if se[i] == "A":
        print(li[0])
    elif se[i] == "B":
        print(li[1])
    else:
        print(li[2])
