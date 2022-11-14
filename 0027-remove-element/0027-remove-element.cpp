class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0, j=nums.size()-1;
        while(i<=j){
            cout<<nums[i]<<" "<<nums[j]<<endl;
            if(nums[i]!=val)i++;
            else if(nums[j]==val){
                nums[j]='_';
                j--;
            }
            else
                swap(nums[i],nums[j]);
        }
        return i;
        
    }
};