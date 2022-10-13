class Solution {
public:
   int dp[5001][71]; //5000*71
    int row, col;
    
    int find(vector<vector<int>>& mat, int r, int sum, int& target)
    {
        if(r==row)
            return abs(sum-target);
        
       if(dp[sum][r]!=-1)
           return dp[sum][r];
        
        int minDiff = INT_MAX;
        for(int j=0; j<col; j++)
        {
            minDiff = min(minDiff, find(mat, r+1, sum+mat[r][j], target));
        }
        return dp[sum][r] = minDiff;
    }
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        memset(dp,-1,sizeof(dp));
        row = mat.size();
        col = mat[0].size();
        return find(mat, 0, 0, target);
    }
};