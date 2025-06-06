# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        head = ListNode(0)
        curr = head
        carry = 0
        while l1 != None or l2 != None or carry != 0:
            x = l1.val if l1 else 0
            y = l2.val if l2 else 0
            totalSum = x + y + carry
            carry = totalSum // 10
            curr.next = ListNode(totalSum % 10)
            curr = curr.next
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
        return head.next
        