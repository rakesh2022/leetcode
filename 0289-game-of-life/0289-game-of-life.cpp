class Solution {
public:
    int move[8][2]={{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1},{1,0},{1,1}};
    int find(vector<vector<int>>& b,int r,int c){
        int cnt=0;
        for(int i=0;i<8;i++){
            int x=move[i][0]+r;
            int y=move[i][1]+c;
            if(min(x,y)>=0 && x<b.size() && y<b[0].size() && b[x][y]==1)cnt++;
        }
        return cnt;
    }
    void gameOfLife(vector<vector<int>>& b) {
        int m=b.size();
        int n=b[0].size();
        
        vector<vector<int>>mat(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int neighl=find(b,i,j);
                mat[i][j]=0;
                if(b[i][j]==1){
                    
                    if(neighl<2){
                        mat[i][j]=0;
                    }
                    else if(neighl<=3)
                        mat[i][j]=1;
                    else
                        mat[i][j]=0;
                }
                else{
                    if(neighl==3)mat[i][j]=1;
                }
            }
        }
        b=mat;
    }
};