// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i=1,j=n,ans=n;
        while(i<=j){
            int mid=((long long)i+j)>>1;
            if(isBadVersion(mid)){
                ans=mid;
                j=mid-1;
            }
            else{
                i=mid+1;
             // if(ans!=n)retun   
            }
        }
        return ans;
    }
};