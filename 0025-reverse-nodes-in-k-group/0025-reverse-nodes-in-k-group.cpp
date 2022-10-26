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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy=new ListNode(0),*done=dummy,*ptr=head,*start=head,*prev=head,*nxt;
        int n=0;
        dummy->next=head;
        
        while(ptr){
            ptr=ptr->next;
            n++;
        }
        int grp=n/k;
        ptr=head;
        // prev=head;
        // ptr=head->next;
        while(grp--){
            prev=ptr;
            start=ptr;
            ptr=ptr->next;
            for(int i=1;i<k;i++){
                nxt=ptr->next;
                ptr->next=prev;
                prev=ptr;
                ptr=nxt;
            }
            done->next->next=ptr;
            done->next=prev;
            done=start;
        }
        // ptr=dummy->next;
        // int cnt=9;
        // while(ptr && cnt--){
        //     cout<<ptr->val<<endl;
        
        return dummy->next;
    }
};