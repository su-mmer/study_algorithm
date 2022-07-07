# 네 개의 윷
# 도개걸윷모중 어떤 것인지 출력

for i in range(3):
    li = list(map(int, input().split()))
    
    if sum(li)==3:
        print("A")
    elif sum(li)==2:
        print("B")
    elif sum(li)==1:
        print("C")
    elif sum(li)==0:
        print("D")
    else:
        print("E")
