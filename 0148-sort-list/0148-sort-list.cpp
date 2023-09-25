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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode* temp=NULL;
        ListNode* fast=head;
        ListNode* slow=head;
        
        while(fast!=NULL && fast->next!=NULL){
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        temp->next=NULL;
        
        ListNode* a = sortList(head);
        ListNode* b = sortList(slow);
        
        return merge(a, b);
    }
    
    ListNode* merge(ListNode* a, ListNode* b){
        ListNode* x = new ListNode(0);
        ListNode* y = x;
        
        while(a!=NULL && b!=NULL){
            if(a->val <= b->val){
                y->next=a;
                a=a->next;
            }
            else{
                y->next=b;
                b=b->next;
            }
            y=y->next;
        }
        
        if(a!=NULL){
            y->next=a;
            a=a->next;
        }
        
        if(b!=NULL){
            y->next=b;
            b=b->next;
        }
        return x->next;
    }
};