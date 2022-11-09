class Solution {
public:
    string shortestPalindrome(string x) {
        string s=x;
        reverse(s.begin(),s.end());
        s= x+ "#" + s ;
        int n=s.length();
        vector<int> lps(n);
        int idx=0,maxLen=0;
        for(int i=1;i<n;i++){
            if(s[i]==s[idx]){
                lps[i]=lps[i-1]+1;
                idx++;
            }
            else{
                idx=lps[i-1];
                while(idx>0 && s[i]!=s[idx])
                    idx=lps[idx-1];
                if(s[i]==s[idx])idx++;
                lps[i]=idx;
            }
            // maxLen= max(maxLen, lps[i]);
        }
        maxLen=lps.back();
        string rev=x.substr(maxLen);
        reverse(rev.begin(), rev.end());
        x=rev+x;
        return x;
    }
};