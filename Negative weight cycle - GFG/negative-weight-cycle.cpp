//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    
	    vector<int>dist(n,10000000);
	    for(int i=1;i<n;i++){
            for(auto &e:edges){
                if(dist[e[0]]+e[2] < dist[e[1]])
                dist[e[1]]=dist[e[0]]+e[2];
            }	        
	    }
	    for(auto &e:edges){
                if(dist[e[0]]+e[2] < dist[e[1]])
               return 1;
            }
            return 0;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int x, y, z;
			cin >> x >> y >> z;
			edges.push_back({x,y,z});
		}
		Solution obj;
		int ans = obj.isNegativeWeightCycle(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends