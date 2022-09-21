class Solution {
public:
    int t[601][101][101];
    int findMaxForm(vector<string>& strs, int m, int n) {
        int l=strs.size();
        for(int i=0;i<=l;i++){
            for(int j=0;j<=m;j++){
                for(int k=0;k<=n;k++){
                    if(i==0)t[i][j][k]=0;
                }
            }
        }
        for(int i=1;i<=l;i++){
            int zero=count(strs[i-1].begin(),strs[i-1].end(),'0');
            int one=strs[i-1].size()-zero;
            for(int j=0;j<=m;j++){
                for(int k=0;k<=n;k++){
                    if(j>= zero && k>= one){
                        t[i][j][k]= max(t[i-1][j-zero][k-one]+1,t[i-1][j][k]);
                    }
                    else
                        t[i][j][k]=t[i-1][j][k];
                    
                }
            }
        }
        return t[l][m][n];
        
    }
};