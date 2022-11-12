class Solution {
public:
    int countGoodStrings(int l, int h, int z, int o) {
        vector<int>t(h+1);
        t[0]=1;
        int m=1e9+7;
        int res=0;
        for(int i=1;i<=h;i++){
            if(i>=z) t[i]=t[i-z];
            if(i>=o)t[i]= (t[i-o]+t[i])%m;
                if(i>=l)res= (res+t[i])%m;
                
        }
        return res;
    }
};