class Solution {
public:
    int solve(int s,int n){
        if(n<s)return 0;
        if(n==s)return 1;
        return 1+solve(s+1,n-s);
    }
    int arrangeCoins(int n) {
       return solve(1,n); 
    }
};