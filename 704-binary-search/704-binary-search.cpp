class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int l=0,r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)>>1;
            if(nums[mid]==tar)return mid;
            if(nums[mid]>tar) r=mid-1;
            else
                l=mid+1;
        }
        return -1;
    }
};