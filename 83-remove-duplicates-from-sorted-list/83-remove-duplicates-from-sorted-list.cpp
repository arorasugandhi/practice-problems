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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *x=head;
        
        if(head==NULL || head->next==NULL)
        {      
            return head;
        }
        
        while(x->next)
        {
            if(x->val==x->next->val)
            {
                x->next=x->next->next;
            }
        
            else
            {
                x=x->next;
            }
        }
        return head;
    }
};