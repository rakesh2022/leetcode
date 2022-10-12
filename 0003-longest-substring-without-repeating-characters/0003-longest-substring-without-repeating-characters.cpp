class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,ans=0,dup=0;
        vector<int>cnt(256,0);
        for(;j<s.length();j++){
            cnt[s[j]]++;
            dup+= cnt[s[j]]==2;
            if(dup >0)
                dup-= --cnt[s[i++]] == 1;
        }
        return j-i;
      
    }
};