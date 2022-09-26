class Solution {
public:
    int move[4][2]={{0,1},{-1,0},{0,-1},{1,0}};
    void fill(vector<vector<int>>& grid,int r,int c){
        if(min(r,c)<0 || r>=grid.size() || c>=grid[0].size() || grid[r][c]==1)return;
        grid[r][c]=1;
        for(int i=0;i<4;i++){
            int x=r+move[i][0];
            int y=c+move[i][1];
            // if(isOk(grid,x,y)grid[x][y]==0)
             fill(grid,x,y);
        }
         // return true;
         
        
    }
    int closedIsland(vector<vector<int>>& grid) {
       int ans=0;
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((min(i,j)==0 || i==m-1 || j==n-1) && grid[i][j]==0){
                    fill(grid,i,j);
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    fill(grid,i,j);
                        ans++;
                }
            }
        }
        
        return ans;
          
    }
};

 
//     int numIslands(vector<vector<char>>& grid) {
     
//     }