class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>res;
        int n= nums.size();
        int freq=0,val=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i] == val)
                freq++;
            else{
                if(freq > n/3)
                res.push_back(val);
                val=nums[i];
                freq=1;
            }
        }
        if(freq > n/3)
                res.push_back(val);
        return res;
    }
};