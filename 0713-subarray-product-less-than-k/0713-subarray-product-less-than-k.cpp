class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0)return 0;
        int p=1,i=0,j=0,ans=0;
        for(;j<nums.size();j++){
            p*=nums[j];
            while(i<j && p>=k)p/=nums[i++];
            if(p<k)
            ans+= (j-i+1);
        }
        return ans;
    }
};