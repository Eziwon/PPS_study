// LeetCode
// 876. Middle of the Linked List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* mid = head;
        ListNode* tail = head;
        while(tail && tail->next) {
            mid = mid->next;
            tail = tail->next->next;
        }
        return mid;
    }
};
