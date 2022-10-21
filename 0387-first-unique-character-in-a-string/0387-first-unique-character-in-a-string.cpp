class Solution {
public:
    int firstUniqChar(string s) {
        int cnt[26]={};
        for(auto a:s)
            cnt[a-'a']++;
        for(int i=0;i<s.length();i++){
            if(cnt[s[i]-'a']==1)return i;
        }
        return -1;
    }
};