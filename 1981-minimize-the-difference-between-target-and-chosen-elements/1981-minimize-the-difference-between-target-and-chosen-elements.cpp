class Solution {
public:
    int ans;
    vector<vector<int>>t;
    int solve(vector<vector<int>>& mat, int r,int dif){
        if(r==mat.size()){
         return abs(dif);
         
        }
        if(t[r][dif+5000]!= -1)return t[r][dif+ 5000];
        int res=INT_MAX;
        for(int c=0;c<mat[r].size();c++){
           
            res=min(res,solve(mat,r+1,dif-mat[r][c]));
        }
        return t[r][dif+ 5000]=res;
    }
    int minimizeTheDifference(vector<vector<int>>& mat, int tar) {
    ans=INT_MAX;
        t.resize(71,vector<int>(10000,-1));
        for(int i=0;i<mat.size();i++){
            sort(mat[i].begin(), mat[i].end());
            mat[i].erase(unique(mat[i].begin(), mat[i].end()),mat[i].end());
        }
       return solve(mat,0,tar);
        // return ans;
    }
};