// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        vector<int>f,s,res;
        Node* cur1=first,*cur2=second;
        while(cur1 || cur2){
            if(cur1){
                f.push_back(cur1->data);
                cur1=cur1->next;
            }
            if(cur2){
              s.push_back(cur2->data);
                cur2=cur2->next; 
            }
        }
        int n=f.size(),m=s.size();
       int i=n-1,j=m-1;
       int carry=0;
       while(i>=0 || j>=0){
           int sum=carry;
           if(i>=0){
               sum+=f[i];
               i--;
           }
           if(j>=0){
               sum+=s[j];
            j--;   
           }
           res.push_back(sum%10);
           carry=sum/10;
       }
       if(carry>0)res.push_back(carry);
       Node* head=new Node(res.back());
       Node* cur=head;
    //   if(carry>0){
    //       cur->data=carry;
    //   }
       for(int k=res.size()-2;k>=0;k--){
           Node* node=new Node(res[k]);
           cur->next=node;
           cur=cur->next;
       }
       
       return head;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends