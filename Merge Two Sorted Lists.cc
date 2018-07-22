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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) { 
        ListNode dummyNode(0);
        ListNode * point = &dummyNode;
        
        while (l1 != NULL && l2 != NULL)
        {   
            if ( l1->val <= l2->val)
            {
                point->next = l1;
                l1 = l1->next;
            }
            else
            {
                point->next = l2;
                l2 = l2->next;
            }    
            point = point->next;
        }
        point->next = l1 ? l1 : l2;
        return dummyNode.next;
    }

};