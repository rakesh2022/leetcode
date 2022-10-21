class Solution {
public:
    int titleToNumber(string s) {
        reverse(s.begin(), s.end());
        long ans=0;
      long p=1;
        for(auto a:s){
            ans+= p*(a-'A' +1);
            
            p*=26;
        }
        return ans;
    }
};