class Solution {
public:
    int t[200][200];
    int minimumTotal(vector<vector<int>>& tri) {
        t[0][0]=tri[0][0];
        for(int i=1;i<tri.size();i++){
            for(int j=0;j<tri[i].size();j++){
                if(j==0)
                t[i][j]=t[i-1][j] + tri[i][j];
                else if(j== tri[i].size()-1)
                    t[i][j]= t[i-1][j-1]  + tri[i][j];
                    else
                    t[i][j]=min(t[i-1][j],t[i-1][j-1]) + tri[i][j];
                 cout<<t[i][j]<<" ";
            }
           
        }
       int ans= INT_MAX;
        int n=tri.size();
        for(int j=0;j<tri.size();j++)
            ans=min(ans,t[n-1][j]);
        return ans;
        
    }
};