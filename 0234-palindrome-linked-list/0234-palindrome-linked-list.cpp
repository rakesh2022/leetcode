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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)return true;
      stack<int>st;
        ListNode* slow=head,*fast=head,*ptr;
        
        while(fast && fast->next){
            st.push(slow->val);
            fast=fast->next->next;
            slow=slow->next;
        }
        if(fast==NULL){
            ptr=slow;
        }
        else
            ptr=slow->next;
        while(ptr){
            if(ptr->val != st.top())return false;
            ptr=ptr->next;
            st.pop();
        }
        return true;
    }
};