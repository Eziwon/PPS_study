# 바구니 뒤집기

import sys

n,m=map(int, sys.stdin.readline().split())
lst=[i for i in range (1,n+1)]

for i in range(m):
    a,b=map(int, sys.stdin.readline().split())
    temp=lst[a-1:b]
    temp.reverse()
    lst[a-1:b]=temp
[print(lst[i], end=" ") for i in range(n)]
    
