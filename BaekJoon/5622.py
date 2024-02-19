# 다이얼

import sys

dial=['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
a=input()
ans=0
for i in range(len(a)):
    for j in dial:
        if a[i] in j:
            ans+=dial.index(j)+3
print(ans)
