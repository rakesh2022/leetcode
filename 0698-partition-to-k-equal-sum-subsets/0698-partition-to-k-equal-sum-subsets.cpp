class Solution {
public:
   unordered_map<int,bool>mp;
    bool partPoss(vector<int>&nums, int vis, int sum, int tar,int k){
        if(k==1)return true;
        if(tar==sum){
            return partPoss(nums,vis,0,tar,k-1);
        }
        if(mp.find(vis)!=mp.end())return mp[vis];
            bool ans=false;
        for(int i=0;i<nums.size(); i++){
            if((vis&(1<<i)) == 0 && sum+nums[i]<=tar && partPoss(nums,vis^(1<<i),sum+nums[i],tar,k)){
                ans=true;
                break;
            }
        }
        mp[vis]=ans;
        return ans;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
         int vis=0;
        mp.clear();
        int sum =accumulate(nums.begin(), nums.end(), 0);
        // for(int i=0;i<nums.size();i++)vis.push_back(0);
        if(sum % k != 0)return false;
        return partPoss(nums, 0,0,sum/k,k);
    }
};