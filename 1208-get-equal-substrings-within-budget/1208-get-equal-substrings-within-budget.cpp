class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int i=0,j=0,cost=0,ans=0;
        for(;j<s.length();j++){
            cost+= abs(s[j]-t[j]);
            while(cost> maxCost)cost-= abs(s[i]-t[i]) ,i++;
            ans=max(ans, j-i+1);
        }
        return ans;
    }
};