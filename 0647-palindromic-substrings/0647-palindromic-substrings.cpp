class Solution {
public:
    int countSubstrings(string s) {
      int counter=0;
        for(int i=0;i<s.length();i++){
            for(int l=i,r=i;l>=0 && r<s.length() && s[l]==s[r];l--, r++)
                counter++;
            for(int l=i,r=i+1;l>=0 && r<s.length() && s[l]==s[r];l--, r++)
                counter++;
            
        }
        return counter;
    }
};