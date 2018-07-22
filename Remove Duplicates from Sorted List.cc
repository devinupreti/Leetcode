/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head){ return head; }
        ListNode * answer = head;
        ListNode * head2 = head;
        while(head2->next != NULL)
        {
            while(head2->val == head2->next->val)
            { head2->next = head2->next->next;
              if (head2->next == NULL) { break; } 
            }
            head2 = head2->next; 
            if (head2 == NULL) { break; }
        }
        return answer;
    }
};