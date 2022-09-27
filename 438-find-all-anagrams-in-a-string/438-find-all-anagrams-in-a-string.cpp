class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>mp;
        for(auto &a:p){
            mp[a]++;
        }
        int d=mp.size(),k=p.size();
        int i=0,j=0;
        vector<int>res;
        while(j<s.size()){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    d--;
                }
            }
            if(j-i+1 < k)j++;
            else{
                if(d==0)
                    res.push_back(i);
                if(mp.find(s[i])!=mp.end()){
                mp[s[i]]++;
                if(mp[s[i]]==1)
                    d++;
                }
                i++;
                j++;
            }
        }
        return res;
    }
};