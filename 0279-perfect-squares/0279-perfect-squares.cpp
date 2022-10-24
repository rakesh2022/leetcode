class Solution {
public:
    int numSquares(int n) {
        vector<int>v(n+1);
        for(int i=1;i<=n;i++){
            v[i]=i;
            for(int j=1;j<=sqrt(i);j++){
                if(v[i - j*j]+1 < v[i])
                    v[i]= v[i - j*j]+1;
            }
        }
        return v[n];
    }
};