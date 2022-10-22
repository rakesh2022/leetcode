class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        //transpose
        int n= m.size();
        vector<vector<int>>mat(n,vector<int>(n));
        int c=n;
        for(int i=0;i<n;i++){
            int r=0;
            c--;
            for(int j=0;j<n;j++){
                mat[r++][c]=m[i][j];
                
            }
        }
       m=mat;
        // ret
    }
};