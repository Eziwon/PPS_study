# 알파벳 찾기

import sys

str=sys.stdin.readline()
alpha = list(range(97,123))

for s in alpha:
    print(str.find(chr(s)))
  
