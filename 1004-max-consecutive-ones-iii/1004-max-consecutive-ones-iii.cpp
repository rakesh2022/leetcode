class Solution {
public:
    int longestOnes(vector<int>& A, int k) {
//         int i=0,j=0,flip=0;
//         for(;j<A.size();j++){
//             flip+= A[j]==0;
//             if(flip>k)flip-= A[i++]==0;
//         }
//         return j-i;
              int i = 0, j = 0, cnt = 0, N = A.size(), ans = 0;
        while (j < N) {
            cnt += A[j] == 0;
            while (cnt > k) cnt -= A[i++] == 0;
            ans = max(ans, j - i+1);
            j++;
        }
        return ans;
        
    }
};