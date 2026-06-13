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

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;

        int length = 0;
        while(temp != NULL){
            temp = temp->next;
            length++;
        }
        int nodePos = length - n + 1;
        temp = head;
        
        if(nodePos == 1){
            head = head->next;
            delete(temp);
        }
        else{
            int cnt = 1;
            ListNode* curr = head->next;
            
            while(cnt < nodePos-1){

                temp = temp->next;

                curr = curr->next;

                cnt++;
            }

            temp->next = curr->next;

            delete(curr);
        }

        return head;
    }
};