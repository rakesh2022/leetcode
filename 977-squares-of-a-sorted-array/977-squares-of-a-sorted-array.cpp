class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    int n=nums.size(),i=n;
        vector<int>res;
       for(int k=0;k<n;k++){
           if(nums[k]>=0){
               i=k;
               break;
           }
       }
        int j=i-1;
        while(i<n && j>=0){
            if(nums[i]<=abs(nums[j])){
                res.push_back(nums[i]*nums[i]);
                i++;
            }
            else{
                res.push_back(nums[j]*nums[j]);
                j--;
            }
        }
        while(i<n){
             res.push_back(nums[i]*nums[i]);
                i++;
        }
        while(j>=0){
             res.push_back(nums[j]*nums[j]);
                j--;
        }
           
        return res;
    }
};