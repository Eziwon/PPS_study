# 킹, 퀸, 룩, 비숍, 나이트, 폰

import sys

k = [1, 1, 2, 2, 2, 8]
l = list(map(int, input().split()))

[print(k[i]-l[i], end=' ') for i in range(6)]
