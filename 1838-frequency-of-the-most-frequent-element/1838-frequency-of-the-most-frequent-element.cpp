class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int i=0,ans=1;
        sort(nums.begin(),nums.end());
        long long sum=0;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
            while(((long long)(j-i+1)*nums[j] -sum) >k)sum-=nums[i++];
            ans=max(ans, j-i+1);
            // cout<<ans<<" ";
        }
        return ans;
    }
};