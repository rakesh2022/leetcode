class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int pre=INT_MIN;
        nums.push_back(INT_MIN);
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=pre && nums[i]>=nums[i+1])return i;
            pre=nums[i];
        }
        return -1;
    }
};