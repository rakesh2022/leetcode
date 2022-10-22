class Solution {
public:
    vector<vector<int>>res;
    void permutation(vector<int>nums,int idx){
        if(idx==nums.size()){
            res.push_back(nums);
           return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            permutation(nums,idx+1);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        res.clear();
        permutation(nums,0);
        return res;
    }
};