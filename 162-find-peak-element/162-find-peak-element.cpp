class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int pre=INT_MIN;
        nums.push_back(INT_MIN);
        int s=1, e= nums.size()-2;
        if(e==0)return 0;
        if(nums[1]<nums[0])return 0;
        while(s<=e){
            int mid=(s+e)>>1;
           if(nums[mid]>= nums[mid-1] && nums[mid] >= nums[mid+1])return mid;
            else if(nums[mid]<nums[mid-1])
              e=mid-1;
            else
                s=mid+1;
        }
        return -1;
    }
};