# 문자열 반복

import sys

for _ in range(int(input())):
    c,word=input().split()
    for w in word:
        print(w*int(c), end='')
    print()
  
