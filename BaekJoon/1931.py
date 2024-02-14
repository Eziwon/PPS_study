# 회의실 배정

import sys

n=int(input())
arr=[]
for i in range(n):
    a,b=map(int, sys.stdin.readline().split())
    arr.append([a,b])
arr.sort(key=lambda x:(x[1], x[0]))

end,cnt=0,0
for s, e in arr:
    if s >= end:
        cnt+=1
        end=e

print(cnt)
