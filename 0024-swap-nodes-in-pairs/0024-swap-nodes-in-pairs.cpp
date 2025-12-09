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
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0, head);
        ListNode* cur = &dummy;

        while (cur->next && cur->next->next) {
            ListNode* a = cur->next;
            ListNode* b = cur->next->next;

            a->next = b->next;
            b->next = a;
            cur->next = b;

            cur = a;
        }
        return dummy.next;
    }
};
