// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    class Node{
       
        public:
         int x,y,t;
        Node(int x1,int y1){
            x=x1;
            y=y1;
            t=0;
        }
    };
    public:
    queue<Node*>q;
    // bool ispossible(vector<vector<int>>& grid,int i,int j){
    //     int n=grid.size();
    //     int m=grid[0].size();
    //     if(i+1 <n && grid[i+1][j]==2){
    //         return true;
    //     }
    //     if(i-1 >=0 && grid[i-1][j]==2){
    //         return true;
    //     }
    //     if(j+1 <m && grid[i][j+1]==2){
    //         return true;
    //     }
    //     if(j-1>=0 && grid[i][j-1]==2){
    //         return true;
    //     }
    //     return false;
    // }
    
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // int tim=0;
        // vector<vector<int>> tgrid;
        // int fresh=0;
    
        for(int i=0;i<grid.size();i++){
            // vector<int>v;
            for(int j=0;j<grid[i].size();j++){
                // v.push_back(grid[i][j]);
                if(grid[i][j]==2){
                    Node* newNode=new Node(i,j);
                    q.push(newNode);
                }
            }
            // tgrid.push_back(v);
        }
        // if(fresh==0)return 0;
        int res=0;
           int n=grid.size();
        int m=grid[0].size();
        while(!q.empty()){
            // int tfresh=fresh;
            Node* node=q.front();
            q.pop();
            int i=node->x,j=node->y,tim=node->t;
            res=tim;
        if(i+1 <n && grid[i+1][j]==1){
           Node* newNode=new Node(i+1,j);
           newNode->t=tim+1;
                    q.push(newNode);
                    grid[i+1][j]=2;
        }
        if(i-1 >=0 && grid[i-1][j]==1){
           Node* newNode=new Node(i-1,j);
           newNode->t=tim+1;
                    q.push(newNode);
                    grid[i-1][j]=2;
        }
        if(j+1 <m && grid[i][j+1]==1){
            Node* newNode=new Node(i,j+1);
           newNode->t=tim+1;
                    q.push(newNode);
                    grid[i][j+1]=2;
        }
        if(j-1>=0 && grid[i][j-1]==1){
           Node* newNode=new Node(i,j-1);
           newNode->t=tim+1;
                    q.push(newNode);
                    grid[i][j-1]=2;
        }
            
        }
        for(int i=0;i<grid.size();i++){
            // vector<int>v;
            for(int j=0;j<grid[i].size();j++){
                // v.push_back(grid[i][j]);
                if(grid[i][j]==1){
                   return -1;
                }
            }
        }
        return res;
            // t
        // tim++;
        // if(tfresh==0)return tim;
        // if(fresh==tfresh)return -1;
        // fresh=tfresh;
        // swap(grid,tgrid);
        // }
        // return -1;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends