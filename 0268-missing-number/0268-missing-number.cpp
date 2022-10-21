class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n= nums.size();
       //  nums.push_back(-1);
       //  for(int i=0;i<num)
        int sum=accumulate(nums.begin(),nums.end(),0);
        int tsum= (n*(n+1))/2;
        return tsum-sum;
        
    }
};