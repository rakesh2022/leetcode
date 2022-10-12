class Solution {
public:
    int longestSubarray(vector<int>& nums) {
      int i=0,cnt=0,ans=0;
        for(int j=0;j<nums.size(); j++){
            cnt+= nums[j]==0;
            while(cnt>1)cnt-= nums[i++]==0;
            ans= max(ans, j-i);
        }
        return ans;
    }
};