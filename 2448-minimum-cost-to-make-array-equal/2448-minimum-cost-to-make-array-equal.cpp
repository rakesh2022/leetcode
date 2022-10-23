typedef long long ll;
class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        vector<pair<int,int>>p;
        for(int i=0;i<nums.size();i++)
            p.push_back({nums[i],cost[i]});
        sort(p.begin(), p.end());
        ll ans=0;
        ll total= accumulate(cost.begin(), cost.end(), 0ll);
        ll cnt=0;
        int num;
        for(int i=0;i<nums.size();i++){
            cnt+= p[i].second;
            if(cnt > total/2){
                num=p[i].first;
                break;
            }
        }
        for(int i=0;i<nums.size();i++){
            ans+= abs(p[i].first - num) * (ll)p[i].second;
            }
        return ans;
    }
};