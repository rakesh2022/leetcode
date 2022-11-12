class Solution {
public:
    int ans=INT_MIN;
    
   void dfs(vector<int>adj[],vector<int>&dist,int u,int p,int d,vector<int>&par){
       dist[u]=d;
       par[u]=p;
       for(auto &v:adj[u]){
           if(v!=p)
           dfs(adj,dist,v,u,d+1,par);
       }
   }
    int dfs2(vector<int>adj[],int u,vector<int>&amt,vector<int>&par){
        int cur=amt[u];
        int res=INT_MIN;
        for(auto &v:adj[u]){
            if(v!=par[u])
            res=max(res, dfs2(adj,v,amt,par));
        }
        if(res==INT_MIN)return cur;
        return res+cur;
    }
    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
        int n=edges.size()+1;
        vector<int>adj[n];
         vector<int>dist(n),par(n);
        for(auto &e:edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
       dfs(adj,dist,0,-1,0,par);
        int cur=bob,cur_dist=0;
        par[0]=-1;
        while(cur!=-1){
            if(dist[cur]>cur_dist){
                amount[cur]=0;
            }
            else if(dist[cur]==cur_dist)
                amount[cur]/=2;
            
            cur=par[cur];
            cur_dist++;
        }
        return dfs2(adj,0,amount,par);
            
        
    }
};