class Solution {
public:
    int longestSubarray(vector<int>& nums) {
      int i=0,cnt=0,ans=0,j=0;
        for( j=0;j<nums.size(); j++){
            cnt+= nums[j]==0;
            if(cnt>1)cnt-= nums[i++]==0;
        }
        return j-i-1;
    }
};