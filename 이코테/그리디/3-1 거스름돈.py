n = 1260
count = 0

coin_types = [500, 100, 50, 10]

for coin in coin_types:
    count += n // coin  # 돈을 coin으로 나눈 몫 = coin 갯수
    n %= coin  # 나머지 금액 계산

print(count)
