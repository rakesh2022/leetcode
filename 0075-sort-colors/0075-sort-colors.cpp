class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int l=0,mid=0,h=n-1;
        while(mid<=h){
            if(nums[mid]==0){
                swap(nums[mid++],nums[l++]);
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[h--]);
            }
            else
                mid++;
        }
    }
};