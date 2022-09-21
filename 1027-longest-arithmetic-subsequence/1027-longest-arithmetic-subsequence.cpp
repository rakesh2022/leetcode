class Solution {
public:
    
    int t[1001][1002];
    int longestArithSeqLength(vector<int>& nums) {
        
        for(int i=0;i<=1000;i++){
            for(int j=0;j<=1001;j++){
                t[i][j]=1;
            }
    }
        int ans=0;
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(t[j][nums[i]-nums[j] +501] + 1 > t[i][nums[i]-nums[j] +501])
                    t[i][nums[i]-nums[j] +501] = t[j][nums[i]-nums[j] +501] + 1 ;
                ans= max(ans,t[i][nums[i]-nums[j] +501]);
            }
        }
        return ans;
        
    }
};