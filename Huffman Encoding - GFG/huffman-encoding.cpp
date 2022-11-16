//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	class Node{
	    public:
	  int val;
	  Node* left,*right;
	  Node(int val_){
	      val=val_;
	      left=NULL;
	      right=NULL;
	  }
	};
	class comp{
	    public:
    bool operator()(Node* a,Node* b){
        return a->val > b->val;
    }
	};
	void preorder(Node* root,string s,vector<string>&ans){
	    if(root==NULL)return;
	    if(root->left==NULL && root->right==NULL)ans.push_back(s);
	    preorder(root->left,s+'0',ans);
	    preorder(root->right,s+'1',ans);
	}
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    priority_queue<Node*,vector<Node*>,comp>pq;
		    for(int i=0;i<f.size();i++){
		        Node* node=new Node(f[i]);
		        pq.push(node);
		    }
		    while(pq.size()>1){
		        Node* l=pq.top();
		        pq.pop();
		        Node* r=pq.top();
		        pq.pop();
		        Node* parent=new Node(l->val + r->val);
		        parent->left=l;
		        parent->right=r;
		        pq.push(parent);
		    }
		    Node* root=pq.top();
		    vector<string>ans;
		    preorder(root,"",ans);
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string S;
	    cin >> S;
	    int N = S.length();
	    vector<int> f(N);
	    for(int i=0;i<N;i++){
	        cin>>f[i];
	    }
	    Solution ob;
	    vector<string> ans = ob.huffmanCodes(S,f,N);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    }
	return 0;
}
// } Driver Code Ends