class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        for(int len=1;len<= n/2;len++){
            int temp=len;
            if(n%len)continue;
            int start=0;
            while(temp--){
            bool isok=true;
            for(int i=start+len;i<n;i+=len){
                if(s[i]!=s[i-len]){
                    isok=false;
                    break;
                }
            }
            if(isok==false)break;
                
                start++;
                if(temp==0 && isok)return true;
            }
        }
        return false;
    }
};