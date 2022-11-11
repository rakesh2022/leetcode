class Solution {
public:
    bool valid(int cur[],int map[]){
        for(int i=0;i<26 ;i++){
            if(cur[i]==1 && map[i]!=0)return false;
        }
        return true;
    }
    vector<int> partitionLabels(string s) {
        int map[26]={};
        for(auto a:s)map[a-'a']++;
        int cur[26]={};
        int i=0,j=0;
        vector<int>res;
        for(;j<s.length();j++){
            map[s[j]-'a']--;
            cur[s[j]-'a']=1;
            // cnt++;
            if(map[s[j]-'a']==0  && valid(cur,map)){
                res.push_back(j-i+1);
                i=j+1;
                for(int k=0;k<26;k++)cur[k]=0;
            }
            
        }
        return res;
    }
};