class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string str="";
        int l=0,r=0;
        for(int i=0;i<s.length();i++){
           if(s[i]=='(')
            l++;
            else if(s[i]==')')r++;
            
            if(r>l)r--;
            else
                str+=s[i];
        }
    s=str;
        str="";
        l=0;r=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='(')l++;
            else if(s[i]==')')r++;
            if(l>r)l--;
            else
                str+=s[i];
        }
        reverse(str.begin(),str.end());
        return str;
    }
};