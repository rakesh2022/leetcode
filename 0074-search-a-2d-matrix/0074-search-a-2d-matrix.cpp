class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int m= mat.size(), n=mat[0].size();
        int l=0, r= n*m -1;
        while(l<=r){
            int mid= (l+r)>>1;
            if(mat[mid/n][mid%n] == tar)return 1;
            else if(mat[mid/n][mid%n] > tar)r=mid-1;
            else l=mid+1;
                
        }
        return 0;
    }
};