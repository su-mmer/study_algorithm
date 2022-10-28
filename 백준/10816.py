# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean

import sys
input = sys.stdin.readline
from collections import defaultdict

n = int(input())
arr = list(map(int, input().split()))
m = int(input())
find = list(map(int, input().split()))
dic = defaultdict(int)

# 가진 숫자카드 명단을 해시화한다.
for i in arr:
    dic[i] += 1
# 찾을 숫자카드의 갯수를 출력한다.
for i in find:
    print(dic[i], end=" ")
