
int c=0;
class Solution {
public:
    
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        // c++;
        int mn=ans,mx=ans;
        // if(c==188)return 1;
        for(int i=1;i<nums.size();i++){
           if(nums[i]<0){
               swap(mn,mx);
           }
            
            mx= max(mx*nums[i],nums[i]);
            mn=min(mn*nums[i],nums[i]);
            ans=max(ans,mx);
        }
        return ans;
    }
};