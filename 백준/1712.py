# 고정비용 fix, 유동비용 unfix, 이익 profit
fix, unfix, profit = map(int, input().split())

# 이익이 고정비용보다 커야 수익이 나서 돈을 갚을 수 있다.
if(unfix < profit):
    sum = fix/(profit-unfix) + 1
    print(int(sum))
# 고정비용이 더 커서 돈을 결코 갚을 수 없을 때..
else:
    print(-1)
