# Programmers
# 명예의 전당 (1)

def solution(k, score):
    answer = []
    temp = []
    
    for s in score:
        temp.append(s)
        if (len(temp) > k):
            temp.remove(min(temp))
        answer.append(min(temp))
            
    return answer
  
