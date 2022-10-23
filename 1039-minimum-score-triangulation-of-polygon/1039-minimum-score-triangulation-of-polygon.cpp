class Solution {
public:
    int minScoreTriangulation(vector<int>& v) {
        int n=v.size();
     vector<vector<int>>t(50,vector<int>(50));
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<n;j++){
                if(j-i < 2)continue;
                int res=INT_MAX;
                for(int k=i+1;k<j;k++){
                    res= min(res,t[i][k]+t[k][j]+ v[k]*v[i]*v[j]);
                }
                // cout<<res;
                t[i][j]=res;
            }
        }
        return t[0][n-1];
    }
     //    return t[0][n-1];
  //        int dp[50][50] = {};
  // for (int i = A.size() - 1; i >= 0; --i)
  //   for (int j = i + 1; j  < A.size();  ++j)
  //     for (auto k = i + 1; k < j; ++k)
  //       dp[i][j] = min(dp[i][j] == 0 ? INT_MAX : dp[i][j], dp[i][k] + A[i] * A[k] * A[j] + dp[k][j]);
  // return dp[0][A.size() - 1];
    
};