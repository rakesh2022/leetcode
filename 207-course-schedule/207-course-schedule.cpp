class Solution {
public:
    bool dfs(vector<int>adj[],int u,vector<int>&vis, vector<int>&dfsvis){
        vis[u]=1;
        dfsvis[u]=1;
        for(auto &v:adj[u]){
            if(vis[v]==0){
                if(dfs(adj,v,vis,dfsvis))return true;
            }
            else if(dfsvis[v])return true;
        }
        dfsvis[u]=0;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& pre) {
        // int n=pre
        vector<int>adj[n];
        for(auto &e:pre){
            adj[e[1]].push_back(e[0]);
        }
        vector<int>vis(n),dfsvis(n);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                if(dfs(adj,i,vis,dfsvis))return false;
            }
        }
        return true;
    }
};