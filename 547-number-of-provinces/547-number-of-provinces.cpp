class Solution {
public:
    void dfs(vector<int>adj[],int u,vector<int>&vis){
        vis[u]=1;
        for(auto &v:adj[u]){
            if(vis[v]==0){
                dfs(adj,v,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& grid) {
         int ans=0;
        int n=grid.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && grid[i][j]==1){
                   adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int>vis(n);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                dfs(adj,i,vis);
                ans++;
            }
        }
        return ans;
    }
};
  