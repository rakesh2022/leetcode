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
    ListNode* reverseList(ListNode* head) {
       //  if(head==NULL)return NULL;
       //  if(head->next == NULL)return head;
       // ListNode* nhead= reverseList(head->next);
       //  head->next->next=head;
       //  head->next=NULL;
       //  return nhead;
        if(head==NULL)return NULL;
        stack<ListNode*>stk;
        ListNode* ptr=head;
        while(ptr->next){
            stk.push(ptr);
            ptr=ptr->next;
        }
        ListNode* nhead=ptr;
        while(!stk.empty()){
            ptr->next=stk.top();
            stk.pop();
            ptr=ptr->next;
        }
        ptr->next=NULL;
        return nhead;
        
    }
};