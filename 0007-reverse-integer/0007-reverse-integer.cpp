class Solution {
public:
    int reverse(int x) {
        int x1=abs(x);
        long res=0;
        for(;x1>0;x1/=10){
            res=res*10 + x1%10;
            
        }
        if(res> INT_MAX)return 0;
        if(x<0)res= -res;
        return res;
    }
};