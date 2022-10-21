class Solution {
public:
    int mySqrt(int x) {
        if(x<=1)return x;
        int l=1,r=x;
        int ans=x;
        while(l<=r){
            int mid=((long)l+r)>>1;
            if((long long)mid*mid <= (long long)x){
                ans=mid;
                l=mid+1;
            }
            else
                r=mid-1;
        }
        return ans;
    }
};