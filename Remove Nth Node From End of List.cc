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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * pointer;
        pointer = head;
        int node_count = 0;
        if(head) { } else { return head; }
        while(pointer)
        { pointer = pointer->next; node_count++;    }
        
        if(node_count == 1) { head = NULL; }
        else
        {
        int to_remove = node_count - (n - 1);
        
        pointer = head;
        
        if(to_remove == 1 ) { head = head->next; return head; }
        //if(to_remove == 2 ) { } 
        
        for(int i = 1; i < to_remove - 1 ; i++)
        {  pointer = pointer->next; }
        
        pointer->next = pointer->next->next; 
        
        
        } 
        return head;
    }
};