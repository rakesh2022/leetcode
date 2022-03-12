class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lSum=0,rSum=0;
        rSum=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++){
        rSum-=nums[i];
            if(lSum==rSum)return i;
            lSum+=nums[i];
        }
        return -1;
    }
};