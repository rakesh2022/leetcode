class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size()-1, buy,sell,i=0,profit=0;
        while(i<n){
            while(i<n && p[i+1]<=p[i])i++;
            buy=p[i];
             while(i<n && p[i+1]>p[i])i++;
            sell=p[i];
             profit+= sell-buy;
        }
        return profit;
    }
};