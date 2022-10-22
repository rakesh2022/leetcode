class Solution {
public:
    vector<string>res;
    void backtrack(string p, int open,int close, int mx){
        if(p.length()== 2*mx){
            res.push_back(p);
                return;
        }
        if(open<mx)
            backtrack(p+'(', open+1,close,mx);
        if(close<open)
            backtrack(p+')', open,close+1, mx);
    }
    vector<string> generateParenthesis(int n) {
        res.clear();
        backtrack("",0,0,n);
        return res;
    }
};