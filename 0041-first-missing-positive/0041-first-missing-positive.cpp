class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int i= upper_bound(nums.begin(), nums.end(),0)- nums.begin();
        if(i==nums.size() || nums[i]!=1)return 1;
        for(;i<nums.size()-1;i++){
            if(!(nums[i]==nums[i+1] || nums[i]+1==nums[i+1]))return nums[i]+1;
        }
        return nums.back()+1;
    }
};