class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums3 = nums1 + nums2

        nums3.sort()

        total_size = len(nums3)

        if total_size % 2 == 0:
            return (nums3[(total_size//2) - 1] + nums3[total_size//2]) / 2
        else:
            return nums3[total_size//2]
