// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* reverse(Node* node){
        if(node==NULL || node->next==NULL)return node;
        Node* prev=NULL,*next=node;
        while(node){
            next=node->next;
            node->next=prev;
            prev=node;
            node=next;
        }
        return prev;
    }
    bool isPalindrome(Node *head)
    {
        if(head==NULL || head->next==NULL)return true;
       Node* slow=head,*fast=head;
       while(fast->next!=NULL && fast->next->next!=NULL){
           slow=slow->next;
           fast=fast->next->next;
       }
      
       slow->next=reverse(slow->next);
        slow=slow->next;
       Node* ptr=head;
       while(slow){
           if(slow->data !=ptr->data)return false;
           slow=slow->next;
           ptr=ptr->next;
       }
       return true;
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends