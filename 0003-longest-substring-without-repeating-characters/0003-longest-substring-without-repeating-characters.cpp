class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,ans=0;
        vector<int>cnt(256,0);
        for(;j<s.length();j++){
            cnt[s[j]]++;
            while(cnt[s[j]] >1)cnt[s[i++]]--;
            ans=max(ans,j-i+1);
        }
        return ans;
        //  int i = 0, j = 0, N = s.size(), ans = 0, cnt[128] = {};
        // for (; j < N; ++j) {
        //     cnt[s[j]]++;
        //     while (cnt[s[j]] > 1) cnt[s[i++]]--;
        //     ans = max(ans, j - i + 1);
        // }
        // return ans;
    }
};