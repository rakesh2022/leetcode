class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
      int n=board.size();
        queue<int>q;
        q.push(1);
        vector<int>vis(n*n +1);
        vis[1]=1;
        int steps=0;
        while(!q.empty()){
            int sz=q.size();
                while(sz--){
                    int num=q.front();
                    q.pop();
                    // if(vis[num])continue;
                    // vis[num]=1;
                    if(num== n*n)return steps;
                    for(int i=1;i<=6;i++){
                        int nnum=num+i;
                        if(nnum> n*n || vis[nnum])continue;
                        int r= (nnum-1)/n;
                    int c= (nnum-1)%n;
                    if(r & 1)
                        c= n-1 -c;
                    r= n-1-r; 
                        vis[nnum]=1;
                        if(board[r][c]!=-1){
                          nnum=board[r][c];  
                        }
                        
                        q.push(nnum);
                    }
                }
            steps++;
            }
        
        return -1;
    }
};