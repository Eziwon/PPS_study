# 과제 안 내신 분..?

import sys

students = [i for i in range(1, 31)]
[students.remove(int(input())) for _ in range(28)]
    
print(min(students))
print(max(students))
