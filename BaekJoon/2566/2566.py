# 최댓값

import sys

table = []
max_value = 0

for i in range(9):
    l = list(map(int, input().split()))
    new_max = max(l)
    if max_value <= new_max:
        max_value = new_max
        max_row = i+1
        max_col = l.index(new_max)+1

print(max_value)
print(max_row, max_col)
