class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0;
        vector<int>freq(26,0);
        for(;j<s.length();j++){
            freq[s[j]-'A']++;
            if((j-i+1)- *max_element(freq.begin(),freq.end()) >k)freq[s[i++]-'A']--;
        }
        return j-i;
    }
};