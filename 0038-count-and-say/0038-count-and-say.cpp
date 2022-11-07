class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
         string cur=countAndSay(n-1);
         string res="";
         stack<char>st;
        st.push(cur[0]);
        cur.push_back('a');
         for(int i=1;i<cur.size();i++){
             if(st.top() != cur[i]){
                 res+= to_string(st.size())+st.top();
                 st=stack<char>();
             }
             st.push(cur[i]);
         }
        return res;
    }
};