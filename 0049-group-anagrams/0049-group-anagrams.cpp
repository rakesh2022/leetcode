class Solution {
public:
    string countSort(string s){
        int cnt[26]={};
        for(auto &a:s)cnt[a-'a']++;
        
        string res;
        for(int i=0;i<26;i++){
            res+= string(cnt[i],i+'a');
        }
        return res;
    }
    vector<vector<string>> groupAnagrams(vector<string>& sL) {
         unordered_map<string,vector<string>>mp;
       for(auto &s: sL){
           mp[countSort(s)].push_back(s);
       }
       vector<vector<string> >res;
       for(auto &it:mp){
           res.push_back(it.second);
       }
     
       return res;
    }
};