class Solution {
public:
    char opposite(char ch){
        if(ch=='(')return ')';
         if(ch=='{')return '}';
        return ']';
    }
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')st.push(s[i]);
            else if(st.empty() || s[i]!=opposite(st.top()))return false;
                else st.pop();
        }
        return st.empty();
    }
};