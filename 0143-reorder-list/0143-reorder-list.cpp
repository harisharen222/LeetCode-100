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
    void reorderList(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second = slow->next;
        slow->next = NULL;
        ListNode* prev = NULL;
        while(second != NULL){
            ListNode* forward = second->next;
            second->next = prev;
            prev = second;
            second = forward;
        }
        ListNode* first = head;
        while(prev != NULL){
            ListNode* next1 = first->next;
            ListNode* next2 = prev->next;

            first->next = prev;
            prev->next = next1;

            first = next1;
            prev = next2;
             
        }

        
    }
};