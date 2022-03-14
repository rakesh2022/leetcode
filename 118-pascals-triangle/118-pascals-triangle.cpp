class Solution {
public:
    vector<vector<int>> generate(int rows){
        vector<vector<int>>res(rows,vector<int>());
        res[0]={1};
        if(rows==1)return res;
        // res[1]={1,1};
        // int num=0;
        for(int i=0;i<rows-1;i++){
            vector<int>v;
            v.push_back(1);
        for(int j=0;j<res[i].size()-1;j++){
            // nums+=res[i-1][j];
            v.push_back(res[i][j]+res[i][j+1]);
            // nums=res[i-1][j];
        }
            v.push_back(1);
            res[i+1]=v;
        }
        return res;
    }
};