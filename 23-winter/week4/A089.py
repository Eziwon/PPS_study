# LeetCode
# 108. Convert Sorted Array to Binary Search Tree

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        total = len(nums)
        if not total:
            return None
            
        mid = total//2
        return TreeNode(
            nums[mid],
            self.sortedArrayToBST(nums[:mid]), self.sortedArrayToBST(nums[mid+1:])
        )
