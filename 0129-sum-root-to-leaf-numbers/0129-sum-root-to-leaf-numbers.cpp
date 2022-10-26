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
    int ans=0;
    
    void dfs(TreeNode* node, int sum){
        // if(node==NULL)return ;
        if(node->left == node->right && node->right == NULL){
            ans+= sum*10 + node->val;
            return;
            }
        if(node->left)
            dfs(node->left,sum*10 + node->val);
        if(node->right)
            dfs(node->right, sum*10 + node->val);
        
    }
    int sumNumbers(TreeNode* root) {
        ans=0;
        dfs(root,0);
        return ans;
    }
};