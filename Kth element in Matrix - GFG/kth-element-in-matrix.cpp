//{ Driver Code Starts
// kth largest element in a 2d array sorted row-wise and column-wise
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
     // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
      return 0;
}

// } Driver Code Ends

class node{
  public:
  int r,c,data;
  node(int data_, int r_, int c_){
      data= data_;
      r=r_;
      c=c_;
  }
};

class compare{
    public:
    bool operator()(node* a,node* b){
        return a->data > b->data;
    }
};

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
 priority_queue<node*,vector<node*>, compare>pq;
 for(int i=0;i<n;i++){
     node* tmp= new node(mat[0][i], 0,i);
     pq.push(tmp);
 }
 while(--k){
     node* small= pq.top();
     pq.pop();
     int i=small->r;
     int j=small->c;
     if(i<n-1){
         node* tmp= new node(mat[i+1][j], i+1,j);
         pq.push(tmp);
     }
 }
 return pq.top() ->data;
 
}
