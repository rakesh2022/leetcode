class Solution {
public:
    int bs(int s,int e,vector<int>&nums,int tar,int left){
        if(s>e)return -1;
        int ans=-1;
        while(s<=e){
            int mid=(s+e)>>1;
            if(nums[mid]==tar){
                ans=mid;
                if(left)
                    e=mid-1;
                else
                    s=mid+1;
            }
            else if(nums[mid]>tar){
                e=mid-1;
            }
            else
                s=mid+1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int tar) {
        int l=bs(0,nums.size()-1,nums,tar,1);
        int r=bs(0,nums.size()-1,nums,tar,0);
        return {l,r};
    }
};