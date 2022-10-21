class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
       
        int i=0,j=1,sum=nums[0];
        int ans=sum;
        for(j;j<nums.size();j++){
            if(nums[j-1]<nums[j]){
                sum+=nums[j];
                
            }
            else{
                sum=nums[j];
            }
            cout<<sum<<endl;
           ans= max(ans, sum); 
        }
        return ans;
    }
};