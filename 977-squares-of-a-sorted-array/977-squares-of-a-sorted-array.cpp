class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    int n=nums.size(),i=0,j=n-1,pos=n-1;
        vector<int>res(n);
     while(i<=j){
         if(abs(nums[i])>abs(nums[j])){
             res[pos]=nums[i]*nums[i];
             i++;
         }
         else{
             res[pos]=nums[j]*nums[j];
             j--;
         }
         pos--;
     }
        return res;
       
    }
};