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
    bool isleaf(TreeNode* node){
        if(node == NULL) return false;
        if(node->left == NULL && node->right == NULL)return true;
        return false;
    }
    void inorder(TreeNode* node, vector<int>&leaf1){
        if(node == NULL)return ;
        inorder(node->left, leaf1);
        if(isleaf(node))leaf1.push_back(node->val);
        inorder(node->right, leaf1);
    }
  
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       vector<int>leaf1, leaf2;
        inorder(root1, leaf1);
        inorder(root2, leaf2);
        if(leaf1.size() != leaf2.size())return 0;
        for(int i=0;i<leaf1.size(); i++){
            if(leaf1[i] != leaf2[i])return false;
        }
        return true;
    }
};