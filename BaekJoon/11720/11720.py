# 숫자의 합

# method 1
import sys

n=int(input())
print(sum(map(int, input())))

# method 2
import sys

n=int(input())
number=input()

sum=0
for num in number:
    sum+=int(num)
print(sum)
