class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            ans+= abs(nums[i]-nums[n/2]);
        }
        return ans;
    }
};