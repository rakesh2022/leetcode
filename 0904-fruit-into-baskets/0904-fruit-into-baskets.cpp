class Solution {
public:
    int totalFruit(vector<int>& f) {
        unordered_map<int,int>mp;
        int i=0,j=0,ans=0;
        for(;j<f.size();j++){
            mp[f[j]]++;
           if(mp.size()>2){
                mp[f[i]]--;
                if(mp[f[i]]==0)mp.erase(f[i]);
                i++;
            }
        }
        return j-i;
    }
};