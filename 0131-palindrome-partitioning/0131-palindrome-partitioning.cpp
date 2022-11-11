class Solution {
public:
    vector<vector<string>>res;
    bool palind(string &s,int i,int j){
        while(i<j){
            if(s[i++]!=s[j--])return false;
            
        }
        return true;
    }
    void mcm(string &s,int i,int j,vector<string>&temp){
        if(i>j){
            res.push_back(temp);
            return;
        }
        
            
            for(int k=i;k<=j;k++){
                if(palind(s,i,k)){
                    temp.push_back(s.substr(i,k-i+1));
                    // if(palind(s,k+1,j)){
                    //     temp.push_back(s.substr(k+1));
                    //     mcm(s,k+1,j,temp);
                    //     temp.pop_back();
                    // }
                    mcm(s,k+1,j,temp);
                    temp.pop_back();
                    }
            }
        
    }
    vector<vector<string>> partition(string s) {
        res.clear();
        vector<string>temp;
        // temp.push_back(0);
        mcm(s,0,s.length()-1,temp);
        return res;
    }
};