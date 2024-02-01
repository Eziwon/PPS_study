# LeetCode
# 506. Relative Ranks

class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        d = defaultdict(int)
        medal = ["Gold Medal", "Silver Medal", "Bronze Medal"]
        n = len(score)
        for i in range(n):
            d[score[i]] = i
        score.sort(reverse=True)
        
        result = [" "]*n
        for i in range(n):
            if i < 3:
                result[d[score[i]]] = medal[i]
            else:
                result[d[score[i]]] = str(i+1)
        return result
      
