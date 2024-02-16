# 공 바꾸기

import sys

n,m=map(int, input().split())
lst=list(range(1, n+1))

for _ in range(m):
    i,j=map(int, input().split())
    temp=lst[i-1]
    lst[i-1]=lst[j-1]
    lst[j-1]=temp
print(*lst)
