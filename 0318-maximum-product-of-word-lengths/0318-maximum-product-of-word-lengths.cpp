class Solution {
public:
    bool valid(string &s1,string &s2,unordered_map<string,vector<int>>&mp){
        vector<int>cnt=mp[s1];
        for(auto &a:s2){
            if(cnt[a-'a']==1)return false;
        }
        cnt=mp[s2];
         for(auto &a:s1){
            if(cnt[a-'a']==1)return false;
        }
         return true;
    }
    int maxProduct(vector<string>& words) {
        
        int ans=0;
        unordered_map<string,vector<int>>mp;
        for(int i=0;i<words.size();i++){
            vector<int>cnt(26);
            for(auto &a:words[i]){
                cnt[a-'a']=1;
            }
            mp[words[i]]=cnt;
        }
        for(int i=0;i<words.size()-1;i++){
            for(int j=i+1;j<words.size();j++){
                if(ans<(words[i].size() * words[j].size()) && valid(words[i],words[j],mp)){
                        ans= words[i].size() * words[j].size();
                }
            }
        }
        return ans;
        
    }
};