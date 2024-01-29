# LeetCode
# 697. Degree of an Array

class Solution:
    def findShortestSubArray(self, nums: List[int]) -> int:
        C = defaultdict(list)
        for i, n in enumerate(nums):
            C[n].append(i)
        M = max([len(v) for v in C.values()])
        best = len(nums)
        for v in C.values():
            if len(v) == M:
                best = min(best, v[-1]-v[0]+1)
        return best
        
