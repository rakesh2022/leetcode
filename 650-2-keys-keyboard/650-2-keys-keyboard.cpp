class Solution {
public:
    int t[11]={2,3,5,7,11,13,17,19,23,29,31};
    int solve(int n){
        if(n==1)return 0;
        if(n<=5)return n;
        for(int i=0;i<11;i++){
            if(n% t[i] ==0)
                return t[i] + solve(n/ t[i]);
        }
        return n;
    }
    int minSteps(int n) {
        return solve(n);
    }
};