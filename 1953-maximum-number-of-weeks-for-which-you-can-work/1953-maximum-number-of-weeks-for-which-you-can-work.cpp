typedef long long ll;
class Solution {
public:
    long long numberOfWeeks(vector<int>& m) {
    ll sum=accumulate(m.begin(), m.end(), 0LL);
        ll mx=*max_element(m.begin(), m.end());
        ll rest=sum-mx;
        return min(2*rest + 1, sum);
        
    }
};