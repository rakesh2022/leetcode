class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    } 
    int findMinArrowShots(vector<vector<int>>& p) {
        sort(p.begin(),p.end(), cmp);
        int cnt=0;
        int e=p[0][1];
        for(int i=1;i<p.size();i++){
            if(e>=p[i][0])cnt++;
            else
                e=p[i][1];
        }
        return p.size()-cnt;
        
    }
};