class Solution {
public:
    int longestPalindrome(string s) {
      int n=s.length();
        vector<int>t(128);
        for(auto a:s)t[a]++;
        int even=0,odd=0;
        for(int i=0;i<128;i++){
            if(t[i]&1){
                odd=1;
                even+= (t[i]-1);
            }
            else
                even+= t[i];
        }
        return odd+even;
    }
};