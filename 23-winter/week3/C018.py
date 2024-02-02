# LeetCode
# 884. Uncommon Words from Two Sentences

class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        s = s1 + " " + s2
        c = Counter(s.split())
        answer = []
        for k, v in (c.items()):
            if v==1:
                answer.append(k)
        
        return answer
