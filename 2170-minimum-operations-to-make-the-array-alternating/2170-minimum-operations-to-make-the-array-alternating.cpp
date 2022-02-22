class Solution {
public:
    array<int,3> solve(vector<int>& nums,int start){
        int first=0,second=0;
        int cnt[100001]={0};
        for(int i=start;i<nums.size();i+=2){
            if(++cnt[nums[i]]>=cnt[first]){
                if(first!=nums[i])
                    second=first;
                first=nums[i];
            }
            else if(cnt[nums[i]]> cnt[second]){
                second=nums[i];
            }
        }
        return {first,cnt[first],cnt[second]};
    }
    int minimumOperations(vector<int>& nums) {
        auto ev=solve(nums,0),ov=solve(nums,1);
        return nums.size()- (ev[0]!=ov[0]?ev[1]+ov[1]:max(ev[1]+ov[2],ev[2]+ov[1]));
    }
};