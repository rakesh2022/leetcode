class Solution {
public:
    void shift(vector<int>& nums,int i,int j){
        while(i<j){
            nums[i]=nums[i+1];
            i++;
        }
    }
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),i=0,j=n-1;
        while(i<j){
            if(nums[i]==0){
            shift(nums,i,j);
                nums[j]=0;
                j--;
            }
            while(i<j && nums[i]!=0)i++;
            while(j>i && nums[j]==0)j--;
        }
        
    }
};