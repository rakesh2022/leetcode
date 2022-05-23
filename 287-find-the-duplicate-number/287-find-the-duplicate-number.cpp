class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l<r){
            int mid=(l+r)/2;
            int cnt=0;
            for(int x: nums){
                if(x<=mid)cnt++;
            }
            if(cnt>mid)r=mid;
            else l=mid+1; 
        }
        return l;
    }
};