class Solution {
public:
    int longestValidParentheses(string s) {
        int i=0,j=0,ans=0,open=0,close=0;
        stack<int>st;
        st.push(-1);
        for(;j<s.length();j++){
          if(s[j]=='(')st.push(j);
            else{
                st.pop();
                if(st.empty())st.push(j);
                else{
                        ans= max(ans, j-st.top());
                }
        }
        }
        return ans;
        
    }
};