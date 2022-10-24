class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>t(n+1,0);
        t[0]=cost[0];
        t[1]=cost[1];
        for(int i=2;i<=n;i++){
            t[i]=min(t[i-1],t[i-2])+ (i==n?0:cost[i]);
        }
        return t[n];
    }
};