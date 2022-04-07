class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int n=nums.size();
        int l=0,r=n-1,res=0;
        if(nums[0]>t)return 0;
        if(nums[n-1]<t)return n;
        while(l<=r){
            int mid=(l+r)>>1;
            if(nums[mid]==t)return mid;
            if(nums[mid]>t){
                res=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
};