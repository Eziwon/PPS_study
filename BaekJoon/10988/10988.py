# 팰린드롬인지 확인하기

# method 1
import sys

s=input()
s_list=list(s)
s_list.reverse()
s_reverse=''.join(s_list)
if s==s_reverse:
    print('1')
else:
    print('0')

# method 2
import sys

s=list(str(input()))

if s[::1] == s[::-1]:
    print(1)
else:
    print(0)
