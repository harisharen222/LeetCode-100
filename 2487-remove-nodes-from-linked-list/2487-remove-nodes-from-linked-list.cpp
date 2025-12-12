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
    ListNode* rev(ListNode* h){
        ListNode *p = nullptr;
        while(h){
            ListNode* n = h->next;
            h->next = p;
            p = h;
            h = n;
        }
        return p;
    }
public:
    ListNode* removeNodes(ListNode* head) {
        head = rev(head);
        int mx = INT_MIN;
        ListNode *cur = head, *prev = nullptr;
        while (cur) {
            if (cur->val < mx) {
                prev->next = cur->next;
                cur = cur->next;
            } else {
                mx = cur->val;
                prev = cur;
                cur = cur->next;
            }
        }
        return rev(head);
    }
};