class Solution {
public:
    bool possible(int n,int m,vector<int>&nums){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>n)return false;
            sum+=nums[i];
            if(sum >n){
                m--;
                sum=nums[i];
                if(m==0)return false;
            }
            else if(i==nums.size()){
                m--;
            }
        }
        if(m<0)return false;
        return true;
    }
    int splitArray(vector<int>& nums, int m) {
        int s=0, e= accumulate(nums.begin(),nums.end(),0);
        int ans=-1;
        if(nums.size()<m)return -1;
        while(s<=e){
            int mid=(s+e)>>1;
            if(possible(mid,m,nums)){
                ans=mid;
                e=mid-1;
            }
            else
                s=mid+1;
        }
        return ans;
    }
};