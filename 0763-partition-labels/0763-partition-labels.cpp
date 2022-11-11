class Solution {
public:
   
    vector<int> partitionLabels(string s) {
        int pos[26]={};
        for(int i=0;i<s.length();i++)
            pos[s[i]-'a']=i;
      
        int i=0,j=0,maxPos=-1;
        vector<int>res;
        for(;j<s.length();j++){
            maxPos= max(maxPos,pos[s[j]-'a']);
            if(maxPos==j){
                res.push_back(j-i+1);
                i=j+1;               
            }
            
        }
        return res;
    }
};