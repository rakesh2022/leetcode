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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long long>>q;
        int ans=1;
        
        q.push({root,0});
        while(!q.empty()){
             long long sz=q.size();
            long long mini=INT_MAX;
            long long maxi=INT_MIN;
           long long mn=q.front().second;
            while(sz--){
                 auto p=q.front();
                 q.pop();
                long long i=p.second-mn;
                TreeNode* node=p.first;
                if(node->left){
                    q.push({node->left,i*2+1});
                    mini=min(mini,i*2+1);
                    maxi=max(maxi,i*2+1);
                }
                if(node->right){
                    q.push({node->right,i*2+2});
                    mini=min(mini,i*2+2);
                    maxi=max(maxi,i*2+2);
                }
                
            }
            if(maxi==INT_MIN)break;
            ans=max(ans,(int)(maxi-mini+1));
        }
        return ans;
    }
};