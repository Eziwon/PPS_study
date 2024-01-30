# LeetCode
# 349. Intersection of Two Arrays

class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        answer=list()
        dc=defaultdict(lambda:0)
        for n in nums1:
            dc[n]=1
        nums2=set(nums2)
        for n in nums2:
            if dc[n]==1:
                answer.append(n)
        return answer
