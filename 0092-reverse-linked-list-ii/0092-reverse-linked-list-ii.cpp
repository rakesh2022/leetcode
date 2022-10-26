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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* l1=NULL,*dummy=new ListNode(0),*p1=NULL,*r1=NULL,*ptr=head,*nxt,*prev=NULL;
        if(head->next==NULL || left==right)return head;
        int pos=1;
        p1=dummy;
        dummy->next=head;
        while(pos<left){
            p1=ptr;
            ptr=ptr->next;
            pos++;
        }
        l1=ptr;
        while(pos<=right){
            nxt=ptr->next;
            ptr->next=prev;
            prev=ptr;
            ptr=nxt;
            pos++;
        }
        p1->next=prev;
        l1->next=ptr;
        // if(left==1)head=prev;
        return dummy->next;
    }
};