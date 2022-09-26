class Solution {
public:
    int move[4][2]= {{0,1},{-1,0},{0,-1},{1,0}};
    void dfs(vector<vector<int>>& grid,int r,int c,int &area){
        if(r<0 || r>=grid.size() || c<0 || c>=grid[0].size() || grid[r][c]==0)return;
        grid[r][c]=0;
        area++;
        for(int i=0;i<4;i++){
            int x=r+move[i][0];
            int y=c+move[i][1];
            dfs(grid,x,y,area);
        }
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    int area=0;
                    dfs(grid,i,j,area);
                    ans=max(area,ans);
                }
            }
        }
        return ans; 
    }
};

 