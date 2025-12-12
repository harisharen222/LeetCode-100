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
    int pairSum(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *prev = nullptr;
        while (slow) {
            ListNode *nxt = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nxt;
        }
        int ans = 0;
        ListNode *p = head, *q = prev;
        while (q) {
            ans = std::max(ans, p->val + q->val);
            p = p->next;
            q = q->next;
        }
        return ans;
    }
};