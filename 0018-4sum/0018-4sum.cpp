class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int tar) {
                vector<vector<int>> total;
        long target=(long)tar;
        int n = nums.size();
        if(n<4)  return total;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++)
        {
            if(i>0&&nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n-2;j++)
            {
                if(j>i+1&&nums[j]==nums[j-1]) continue;
                int left=j+1,right=n-1;
                while(left<right){
                   long sum=(long)nums[left]+(long)nums[right]+(long)nums[i]+(long)nums[j];
                    if(sum<target) left++;
                    else if(sum>target) right--;
                    else{
                        total.push_back(vector<int>{nums[i],nums[j],nums[left],nums[right]});
                        left++;
                        right--;
                        while(left<right && nums[left-1]==nums[left])left++;
                        while(left<right && nums[left-1]==nums[left])right--;
                        
                    }
                }
            }
        }
        return total;

    }
};