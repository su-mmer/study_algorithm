hw = list(range(1, 31))

for _ in range(28):
    hw.remove(int(input()))

print(*hw, sep="\n")
