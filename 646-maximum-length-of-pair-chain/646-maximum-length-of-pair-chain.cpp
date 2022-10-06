class Solution {
public:
    static bool cmp(vector<int>a,vector<int>b){
       return a[1]<b[1];
   }
    int findLongestChain(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),cmp);
        
        int n=p.size();
        int t[n];
        int ans=0;
        for(int i=0;i<n;i++){
            cout<<p[i][0]<<" "<<p[i][1]<<endl;
            t[i]=1;
            for(int j=0;j<i;j++){
                if(p[j][1]<p[i][0] && t[j]+1 > t[i])
                    t[i]=t[j]+1;
            }
            cout<<t[i]<<" ";
            ans= max(ans,t[i]);
        }
       return ans;
        
    }
};