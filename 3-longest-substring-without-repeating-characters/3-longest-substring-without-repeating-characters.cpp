class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
            int n=s.length(),i=0,j=0,res=0,cnt=0;
        while(j<n){
            if(st.find(s[j])!=st.end()){
                while(s[i]!=s[j]){
                    st.erase(s[i]);
                    i++;
                 cnt--;   
                }
                i++;
            }
            else{
                st.insert(s[j]);
                cnt++;
                res=max(cnt,res);
            }
            j++;
        }
        return res;
    }
};