class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       
        int mn=INT_MAX;
        for(auto &s:strs)
            mn= min(mn, (int)s.length());
        string res=strs[0].substr(0,mn);
        for(auto &s:strs){
            for(int i=0;i<mn;i++){
                if(s[i]!=res[i]){
                    res=s.substr(0,i);
                    mn=i;
                    break;
                }
            }
        }
        return res;
    }
};