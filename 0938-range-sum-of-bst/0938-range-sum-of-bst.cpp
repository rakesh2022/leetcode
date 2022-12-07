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
    int res;
    int inorder(TreeNode* root, int l, int h){
        if(root==NULL)return 0;
       int s1= inorder(root->left, l, h);
       
        int s2=inorder(root->right, l, h);
        int s=0;
         if(root->val >= l && root->val <= h)
            s= root->val;
        return s+ s1 + s2;
        
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        res=0;
       return inorder(root,low,high);
        
        
        
    }
};