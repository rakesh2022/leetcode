class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=nums.size()-1;
        while(i<j){
            while(i<j && nums[i]!=val)i++;
            while(i<j && nums[j]==val)j--;
            swap(nums[i],nums[j]);
            i++;j--;
        }
        i=0;
        int k=0;
        while(i<nums.size()){
            if(nums[i]==val)return k;
            i++;
            k++;
        }
        return k;
    }
};