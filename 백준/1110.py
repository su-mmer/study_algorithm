first = int(input())  # 26
num = first
cycle = 0

while True:
    a = num//10 + num%10  # 2 + 6 = 8
    b = num%10*10 + a%10  # 68
    num = b
    cycle += 1
    if(first == num):
        break

print(cycle)
