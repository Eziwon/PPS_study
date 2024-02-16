# 윤년

import sys

res=0
n=int(input())
if (n%4==0 and n%100!=0) or n%400==0:
    res=1
print(res)
