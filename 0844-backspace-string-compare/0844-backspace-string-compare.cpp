class Solution {
public:
    string find(string s){
        string s1;
        for(auto &a:s){
            if(a=='#' && !s1.empty())s1.pop_back();
            else if(a!='#'){
                s1.push_back(a);
            }
        }
        return s1;
    }
    bool backspaceCompare(string s, string t) {
       string s1,s2;
        s1=find(s);
        s2=find(t);
        return s1.compare(s2)==0;
    }
};