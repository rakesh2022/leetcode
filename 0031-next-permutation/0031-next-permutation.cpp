class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n= nums.size();
        if(n<=2){
            reverse(nums.begin(), nums.end());
         return;   
        }
       int k;
        for(k=n-2;k>=0;k--){
            if(nums[k]< nums[k+1]){
                break;
            }
        }
        cout<<"k="<<k;
        if(k<0){
           reverse(nums.begin(), nums.end());
        }
        else{
            for(int j=n-1;j>k;j--){
                if(nums[j]>nums[k]){ 
                    swap(nums[k], nums[j]);
                break;
                                   }
            }
            reverse(nums.begin()+k+1, nums.end());
        }
        
        
    }
};