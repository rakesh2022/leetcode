class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        string res;
        while(i<s.length()){
            int j=i;
            string part;
            while(j<s.length() && s[j]!=' '){
                part+=s[j++];
            }
            reverse(part.begin(),part.end());
            res+=(part + " ");
            i=j+1;
            // cout<<part<<endl;
        }
        res.pop_back();
        return res;
    }
};