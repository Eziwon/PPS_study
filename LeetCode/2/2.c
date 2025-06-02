/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* curr = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* l3 = curr;

    int carry = 0;
    while (l1 != NULL || l2 != NULL) {
        int sum = 0;

        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }

        sum += carry;
        carry = sum / 10;
        sum = sum % 10;

        curr->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        curr->next->val = sum;
        curr->next->next = NULL;
        curr = curr->next;
    }

    if (carry != 0) {
        curr->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        curr->next->val = carry;
        curr->next->next = NULL;
    }

    return l3->next;
}