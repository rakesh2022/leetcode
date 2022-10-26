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
    void reverse(ListNode* head){
        if(head==NULL || head->next==NULL)return ;
        ListNode* ptr=head,*nxt=head->next,*prev=NULL ;
        
       while(ptr){
           nxt=ptr->next;
           ptr->next=prev;
           prev=ptr;
           ptr=nxt;
       }
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)return true;
      stack<int>st;
        ListNode* slow=head,*fast=head,*ptr;
        
        while(fast && fast->next){
            st.push(slow->val);
            ptr=fast->next;
            fast=fast->next->next;
            slow=slow->next;
        }
        if(fast){
            ptr=ptr->next;
        }
        reverse(slow);
      ListNode* first=head,*last=ptr;
        while(first != slow){
            cout<<first->val<<endl;
            if(first->val != last->val)return false;
            
            first=first->next;
            last = last->next;
        }
       return 1;
    }
};