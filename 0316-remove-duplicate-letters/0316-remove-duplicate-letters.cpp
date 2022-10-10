class Solution {
public:
    string removeDuplicateLetters(string s) {
        int lasti[26]={},seen[26]={};
        for(int i=0;i<s.size();i++)
            lasti[s[i]-'a']=i;
        string res;
        stack<char>st;
      
        for(int i=0;i<s.size();i++){
            int cur=s[i]-'a';
            if(seen[cur])continue;
           while(!st.empty() && lasti[st.top()-'a']>i && st.top()>s[i]){
               seen[st.top()-'a']=0;
               st.pop();
           }
            st.push(s[i]);
            seen[cur]=1;
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};