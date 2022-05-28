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
    int findLength(ListNode* node){
        int len=0;
        while(node){
        node=node->next;
            len++;
        }
        return len;
    }
    ListNode* middleNode(ListNode* head) {
        // ListNode* fast=head,*slow=head;
        // while(fast && fast->next){
        //     slow=slow->next;
        //     fast=fast->next->next;
        // }
        // return slow;
        int len=findLength(head);
        len/=2;
    ListNode* cur=head;
        while(len--){
            cur=cur->next;
        }
        return cur;
    }
};