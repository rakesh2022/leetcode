class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int carry=1;
        reverse(d.begin(), d.end());
        for(int i=0;i<d.size();i++){
            d[i]+=carry;
            carry= d[i]/10;
            d[i]%=10;
        }
        if(carry>0)d.push_back(carry);
        reverse(d.begin(), d.end());
        return d;
    }
};