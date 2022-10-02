class Solution {
public:
    int maxSum(vector<vector<int>>& g) {
        int n=g.size(), m=g[0].size();
    int res=0;
        for(int i=0;i<n-2;i++){
            int sum=0;
            for(int j=0;j<m-2;j++){
                 sum= g[i][j] + g[i][j+1] + g[i][j+2] + 
                          g[i+1][j+1] + 
                     g[i+2][j] + g[i+2][j+1] + g[i+2][j+2];
                res=max(res,sum);
                
            }
            
        }
        return res;
        
    }
};