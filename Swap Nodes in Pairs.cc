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
    ListNode* swapPairs(ListNode* head) {
        ListNode * temp = head; // temp is temporary head
        int count = 0;
        ListNode * prev;
        
        while (temp && temp->next)
        {   
            ListNode * point;
            if (count == 0)
            { 
              point = temp;
              temp = temp->next;
              point->next = temp->next;
              temp->next = point; 
              head = temp;
              count++;
              temp = point->next;
              prev = point;
            }
            else 
            {
              point = temp;
              temp = temp->next;
              point->next = temp->next;
              temp->next = point; 
              prev->next = temp;
              temp = point->next;
              prev = point;
            }
        }
        return head;
    }
};