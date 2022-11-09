class Solution {
public:
    int p= 31;
    int mod=1e9+7;
    // int hash(string & s,int i,int j){
    //     int h=0;
    //     int l=i;
    //     for(int k=0;k<(j-i+1);k++){
    //         h= (h+(s[l++]* ((h*p)%mod))%mod)%mod;
    //     }
    //     return h;
    // }
    int strStr(string txt, string pat) {
        int n=txt.size(), m=pat.size();
        if(n<m)return -1;
        // int tar= hash(pat,0,m-1);
        // int cur=hash(txt,0,m-2);
        // unordered_map<int,bool>mp;
        // for(int i=m-1;i<n;i++){
        //     cur =(cur+ (txt[i] * pow(31,m-1) %mod)%mod)%mod;
        //     if(tar==cur && pat==txt.substr(i-m+1,m))return i-m+1;
        //     cur-= (int)txt[i];
        //     cur =cur/31;
        // }
        // return -1;
        for(int i=0;i<=n-m;i++){
            int j=0;
            for(;j<m;j++){
                if(txt[i+j]!=pat[j])break;
            }
            if(j==m)return i;
        }
        return -1;
    }
};