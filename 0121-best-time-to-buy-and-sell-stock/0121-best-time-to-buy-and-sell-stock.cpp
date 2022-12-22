class Solution {
public:
    int maxProfit(vector<int>& p) {
        int buy=p[0];
        int ans=0;
        for(int i=0;i<p.size();i++){
            buy= min(buy,p[i]);
            ans= max(p[i]-buy, ans);
        }
        return ans;
    }
};