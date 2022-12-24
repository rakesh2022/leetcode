
class Solution {
public:
    int uniquePaths(int m, int n) {
        
    int t[m+1][n+1];
        memset(t,0,sizeof(t));
        for(int i=0;i<=m;i++)t[i][1]=1;
        
        for(int i=0;i<=n;i++)t[1][i]=1;
        for(int i=2;i<=m;i++){
            for(int j=2;j<=n;j++){
                t[i][j]= t[i-1][j] + t[i][j-1];
            }
        }
        return t[m][n];
      
    }
};