/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans;
  void inorder(TreeNode* root,int &k){
        if(root == NULL)return;
        inorder(root->left,k);
      if(k==0)ans=root->val;
      k--;
      inorder(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        k--;
       inorder(root,k);
        return ans;
    }
};