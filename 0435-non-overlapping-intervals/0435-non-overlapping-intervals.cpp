class Solution {
public:
   static bool cmp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& p) {
       sort(p.begin(),p.end(),cmp); 
        int cnt=0;
        int s=p[0][0],e=p[0][1];
        for(int i=1;i<p.size();i++){
            if(p[i][0]<e){
                cnt++;
            }
            else{
                s=p[i][0];
                e=p[i][1];
            }
        }
        return cnt;
    }
};