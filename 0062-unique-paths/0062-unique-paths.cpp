
class Solution {
public:
    int t[101][101];
    int paths(int m,int n){
         if(m==1 || n==1)return 1;
        if(t[m][n] != -1)return t[m][n];
        return t[m][n]= paths(m,n-1) + paths(m-1,n);
    }
    int uniquePaths(int m, int n) {
        memset(t,-1,sizeof(t));
        return paths(m,n);
      
    }
};