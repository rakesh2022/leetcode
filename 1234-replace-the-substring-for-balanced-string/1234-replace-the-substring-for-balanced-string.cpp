class Solution {
public:
    int balancedString(string s) {
        unordered_map<char,int>mp;
        int n=s.length();
        for(int i=0;i<s.length();i++)mp[s[i]]++;
        int i=0,j=0,ans=s.length();
        for(;j<s.size();j++){
            mp[s[j]]--;
            while(i<n){
                bool brk=false;
                for(auto &a:mp){
                    if(a.second > n/4)
                        brk=true;
                }
                if(brk)break;
                ans= min(ans, j-i+1);
                ++mp[s[i++]];
            }
        }
        return ans;
    }
};