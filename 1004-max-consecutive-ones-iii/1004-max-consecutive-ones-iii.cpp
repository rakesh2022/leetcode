class Solution {
public:
    int longestOnes(vector<int>& A, int k) {
        int i=0,j=0,flip=0;
        for(;j<A.size();j++){
            flip+= A[j]==0;
            if(flip>k)flip-= A[i++]==0;
        }
        return j-i;
            
        
    }
};