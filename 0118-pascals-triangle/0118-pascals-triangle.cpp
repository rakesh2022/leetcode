class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>res;
        vector<int>pre(1,1);
        res.push_back(pre);
        for(int i=2;i<=n;i++){
            vector<int>row(i,1);
            for(int j=1;j<i-1;j++){
                row[j]= pre[j]+pre[j-1];
            }
            res.push_back(row);
            pre=row;
        }
        return res;
    }
};