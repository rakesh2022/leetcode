class Solution {
public:
    int move[4][2]={{0,1},{-1,0},{0,-1},{1,0}};
    bool isOk(int r,int c,vector<vector<int>>& mat){
        if(r<0 || r>=mat.size() || c<0 || c>=mat[0].size() || mat[r][c]==-1)return false;
        return true;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size(), n=mat[0].size();
        vector<vector<int>>res(m,vector<int>(n,0));
        queue<pair<int,int>>q;
        for(int i=0; i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                q.push({i,j});
                    mat[i][j]=-1;
                }
            }
        }
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
            auto p=q.front();
            q.pop();
            int u=p.first;
            int v=p.second;
            for(int i=0;i<4;i++){
                int x= u+ move[i][0];
                int y= v+ move[i][1];
                if(isOk(x,y,mat)){
                    q.push({x,y});
                    mat[x][y]=-1;
                    res[x][y]=res[u][v]+1;
                }
            }
        }
        }
       return res; 
    }
};