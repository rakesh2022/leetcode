// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


 // } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
 node* th=NULL,*tt=NULL;
    void addFirst(node* node){
        // if(node==NULL)return;
        if(th==NULL){
            th=node;
            tt=node;
        }
        else {
            node->next=th;
            th=node;
        }
    }
    int length(node* node){
        int len=0;
        while(node!=NULL){
            node=node->next;
            len++;
        }
        return len;
    }
    struct node *reverse (struct node *head, int k)
    { 
       if(head==NULL || head->next==NULL)return head;
       int len=length(head);
       node*oh=NULL,*ot=NULL;
       node* cur=head;
       while(len>0){
       int temp=min(k,len);
       
       while(temp--){
           node* forw=cur->next;
           cur->next=NULL;
           addFirst(cur);
           cur=forw;
       }
       if(oh==NULL){
           oh=th;
           ot=tt;
       }
       else{
           ot->next=th;
           ot=tt;
       }
       th=NULL;
       tt=NULL;
       len-=k;
       }
       return oh;
    }
};


// { Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}

  // } Driver Code Ends