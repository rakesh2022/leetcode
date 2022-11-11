class Solution {
public:
    vector<vector<string>>res;
    bool palind(string s,int i,int j){
        while(i<j){
            if(s[i++]!=s[j--])return false;
            
        }
        return true;
    }
    void mcm(string s,vector<string>&temp){
        if(s.empty()){
            res.push_back(temp);
            return;
        }
        
            
            for(int k=1;k<=s.length();k++){
                if(palind(s,0,k-1)){
                    temp.push_back(s.substr(0,k));
                    // if(palind(s,k+1,j)){
                    //     temp.push_back(s.substr(k+1));
                    //     mcm(s,k+1,j,temp);
                    //     temp.pop_back();
                    // }
                    mcm(s.substr(k),temp);
                    temp.pop_back();
                    }
            }
        
    }
    vector<vector<string>> partition(string s) {
        res.clear();
        vector<string>temp;
        // temp.push_back(0);
        mcm(s,temp);
        return res;
    }
};