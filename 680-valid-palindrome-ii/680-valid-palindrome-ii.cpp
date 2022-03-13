class Solution {
public:
    bool palin(string s){
        if(s.length()<=1)return true;
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
            return true;
    }
    bool validPalindrome(string s) {
      int n=s.length(),i=0,j=n-1;
        if(n<=2)return true;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return (palin(s.substr(i,n-1-2*i)) || palin(s.substr(i+1,n-1-2*i)));
                    // return true;
                
            }
        }
        return true;
    }
};