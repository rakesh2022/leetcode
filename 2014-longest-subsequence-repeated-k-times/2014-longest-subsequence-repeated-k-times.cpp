class Solution {
public:
    string best;
    int count_oc(string &s,string& sub){
        if(sub.size()==0)return s.length();
        int cntr=0,idx=0;
    for(int i=0;i<s.length();i++){
        if(sub[idx]==s[i]){
            idx++;
            if(idx== sub.length()){
                idx=0;
                cntr++;
            }
        }
    }
        return cntr;
    }
    void recur(string s,string sub,int k){
        int cnt=count_oc(s,sub);
        if(cnt<k)return ;
        if(sub.length()>=best.length() && sub>best)best=sub;
        for(char ch='a'; ch<='z';ch++){
            recur(s,sub+ch,k);
        }
        
    }
    string longestSubsequenceRepeatedK(string s, int k) {
        best ="";
        recur(s,"",k);
        return best;
    }
};