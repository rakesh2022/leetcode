class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1)return 1;
        if(trust.size()==0)return -1;
      int j=trust[0][1];
        vector<int>out(n+1);
        for(auto &t:trust){
            out[t[1]]++;
        }
        int mx=max_element(out.begin(),out.end())-out.begin();
    
        for(int i=mx+1;i<=n;i++){
            if(out[i]==out[mx])return -1;
        }
        for(auto &t:trust){
            if(t[0]==mx)return -1;
        }
        if(out[mx]!= n-1)return -1;
       return mx;
    }
};