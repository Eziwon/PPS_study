# A+B - 7

import sys

n=int(input())
for i in range(1, n+1):
    a,b=map(int, sys.stdin.readline().split())
    print('Case #' + str(i) + ':', a+b)
