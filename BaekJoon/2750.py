# 수 정렬하기

import sys

lst=[]
for i in range(int(input())):
    lst.append(int(input()))
lst.sort()
[print(n) for n in lst]
