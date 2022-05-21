// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    unordered_map<int,int>mp;
    Node* myTree(int in[],int inStart,int inEnd,int pre[],int preStart,int preEnd){
        if(inStart>inEnd || preStart>preEnd)return NULL;
        Node* root=new Node(pre[preStart]);
        int inRoot=mp[pre[preStart]];
        int inLeft=inRoot-inStart;
        root->left=myTree(in,inStart,inRoot-1,pre,preStart+1,preStart+inLeft);
        root->right=myTree(in,inRoot+1,inEnd,pre,preStart+inLeft+1,preEnd);
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        for(int i=0;i<n;i++)mp[in[i]]=i;
       return myTree(in,0,n-1,pre,0,n-1);
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends