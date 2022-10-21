class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XOR=0;
        for(auto a:nums)
            XOR^=a;
        return XOR;
    }
};