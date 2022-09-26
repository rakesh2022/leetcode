#include<bits/stdc++.h>
class Solution {
public:
    int dir[5]={0,1,0,-1,0};
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int m=grid.size(),n=grid[0].size(),man=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0)man++;
             if(grid[i][j]==2){
                 q.push({i,j});
                 grid[i][j]=0;
             }   
                
            }      
        }
        
        int time=0;
        while(!q.empty()){
            int sz=q.size();
            time++;
            while(sz--){
                auto p=q.front();
                q.pop();
                int r=p.first;
                int c=p.second;
                man--;
                
                for(int i=0;i<4;i++){
                    int nr=r+ dir[i];
                        int nc= c+dir[i+1];
                    if(min(nr,nc)<0 || nr>=m || nc>=n || grid[nr][nc]==0)continue;
                    grid[nr][nc]=0;
                    q.push({nr,nc});
                    cout<<nr<<" "<<nc<<endl;
                }
            }
        }
       if(man==0){
           return time==0?0:time-1;
       }
        return -1;
        
    }
};