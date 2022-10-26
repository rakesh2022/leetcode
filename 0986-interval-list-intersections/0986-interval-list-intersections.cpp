class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>>res;
        int i=0,j=0;
        while(i<A.size() && j<B.size()){
           int a_s=A[i][0], a_e=A[i][1];
            int b_s=B[j][0], b_e=B[j][1];
            if(a_s<=b_e && b_s<=a_e){
                res.push_back({max(a_s,b_s), min(a_e, b_e)});
            }
            if(a_e<=b_e)i++;
            else
                j++;
        }
        return res;
    }
};