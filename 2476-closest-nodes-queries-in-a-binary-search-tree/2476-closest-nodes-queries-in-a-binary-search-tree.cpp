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
   
    vector<int>nums;
    void inorder(TreeNode* root){
        if(root==NULL)return;
        inorder(root->left);
        nums.push_back(root->val);
        inorder(root->right);
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<vector<int>>res;
        nums.clear();
        inorder(root);
        for(auto num:queries){
           auto it= lower_bound(nums.begin(), nums.end(), num);
            if(it!=nums.end() && *it==num){
                res.push_back({num,num});
            }
            else if(it==nums.end()){
                res.push_back({*prev(it), -1});
            }
            else if(it==nums.begin()){
                 res.push_back({-1, *it});
            }
            else
            {
                 res.push_back({*prev(it), *it});
            }
                
            
        }
        return res;
    }
};