# 공 넣기

import sys

n,m=map(int, input().split())
basket = [0 for _ in range(n)]
for _ in range(m):
    a,b,c=map(int, input().split())
    for i in range(a, b+1):
        basket[i-1]=c

[print(basket[i], end=' ') for i in range(n)]
