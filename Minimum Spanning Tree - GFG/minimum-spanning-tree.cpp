//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

typedef pair<int,int> pii;
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<int>par(V,-1),mst(V,0),key(V,INT_MAX);
        priority_queue<pii, vector<pii>,greater<pii>>pq;
        pq.push({0,0});
        par[0]=-1;
        key[0]=0;
        mst[0]=1;
        while(!pq.empty()){
            auto p=pq.top();
            pq.pop();
            int u=p.second;
            int wt=p.first;
            mst[u]=1;
            for(auto e:adj[u]){
                if(mst[e[0]]==0 && key[e[0]]>e[1]){
                    key[e[0]]= e[1];
                    par[e[0]]=u;
                    pq.push({e[1],e[0]});
                }
            }
        }
        return accumulate(key.begin(), key.end(),0);
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends