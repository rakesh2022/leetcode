class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j=s.length();
        while(i<j){
         if(isalpha(s[i]))
             s[i]= tolower(s[i]);
            if(isalpha(s[j]))
             s[j]= tolower(s[j]);
            if(!(isalpha(s[i]) || isdigit(s[i])))i++;
               else if(!(isalpha(s[j]) || isdigit(s[j])))j--;
                       else if(s[i]!=s[j])return false;
                       else{
                           i++;
                           j--;
                       }
            
        }
        return true;
    }
};