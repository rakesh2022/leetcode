class Solution {
public:
    int maxProfit(vector<int>& p) {
         int ans=0;
        int buy=p[0];
        for(int i=1;i<p.size();i++){
            // buy=min(buy,p[i]);
            int prof=p[i]-buy;
            prof= prof>0?prof:0;
            ans+= prof;
            buy=p[i];
        }
        return ans;
    }
};