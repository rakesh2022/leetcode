class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
    int n=mat.size(), m=mat[0].size();
        vector<int>rows(n), cols(m);
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
               if(mat[i][j] == 0){
                   rows[i]=1;
                    cols[j]=1;
               }
            }
        
        }
        for(int i=0;i<n;i++){
            if(rows[i]){
            for(int j=0;j<m;j++){
                mat[i][j]=0;
            }
            }
        }
        
        for(int i=0;i<m;i++){
            if(cols[i]){
            for(int j=0;j<n;j++){
                mat[j][i]=0;
            }
            }
        }
        
    }
};