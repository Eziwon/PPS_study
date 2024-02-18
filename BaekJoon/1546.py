# 평균

import sys

n=int(input())
v=list(map(int, input().split()))
m=max(v)
for i in range(n):
    v[i] = v[i] / m * 100
print(sum(v)/n)
