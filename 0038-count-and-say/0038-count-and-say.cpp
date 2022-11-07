class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
         string cur=countAndSay(n-1);
         string res="";
        // st.push(cur[0]);
        int j=0;
        char ch=cur[0];
        cur.push_back('a');
         for(int i=1;i<cur.size();i++){
             if(ch != cur[i]){
                 res+= to_string(i-j)+ch;
                 j=i;
                 ch=cur[i];
             }
             
         }
        return res;
    }
};