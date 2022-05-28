// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = new Node(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


 // } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
  public:
    // Return True if the given trees are isomotphic. Else return False.
    

// bool check(Node *ptr1, Node *ptr2){
//       if(!ptr1 && !ptr2)
//           return true;
//       if(!ptr1 || !ptr2)
//           return false;
//       if(ptr1->data != ptr2->data)
//           return false;
//       Node *l1 = ptr1->left?ptr1->left:nullptr;
//       Node *r1 = ptr1->right?ptr1->right:nullptr;
//       Node *l2 = ptr2->left?ptr2->left:nullptr;
//       Node *r2 = ptr2->right?ptr2->right:nullptr;
//       return (check(l1, l2) && check(r1, r2)) || (check(l1, r2) &&  check(r1, l2)) ;
//   }
    bool isIsomorphic(Node *root1,Node *root2)
    {
    if(root1==NULL && root2==NULL)return true;
    if(root1==NULL || root2==NULL)return false;
    if(root1->data != root2->data)return false;
    return (isIsomorphic(root1->left,root2->left) && isIsomorphic(root1->right,root2->right)) || 
    (isIsomorphic(root1->right,root2->left) && isIsomorphic(root1->left,root2->right));
    // return check(root1,root2);
    
    
    }
};

// { Driver Code Starts.

int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		Node* root1 = buildTree(s1);
		Node* root2 = buildTree(s2);
		Solution obj;
		if(obj.isIsomorphic(root1,root2))
		    cout<<"Yes"<<endl;
		else
		    cout<<"No"<<endl;
    }
    return 0;
}
  // } Driver Code Ends