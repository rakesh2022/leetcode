typedef long long ll;
class Solution {
public:
    ll f(vector<int>& nums, vector<int>& cost, int mid){
        ll sum=0;
        for(int i=0;i<nums.size();i++){
            sum+= abs(nums[i]-mid)*(ll)cost[i];
        }
        return sum;
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        ll ans;
            int l=0, h=1000000;
        while(l<=h){
            int mid= (l+h)>>1;
            ll y1=f(nums,cost,mid);
            ll y2=f(nums,cost,mid+1);
            ans=min(y1,y2);
            if(y2>y1){
                h=mid-1;
            }
            else
                l=mid+1;
        }
        return ans;
        
    }
};