class Solution {
public:
    int atMost(vector<int> &A, int k) {
        int distinct = 0, i = 0, j = 0, N = A.size(), ans = 0;
        vector<int>cnt(N+1,0);
        for (; j < N; ++j) {
            distinct += ++cnt[A[j]] == 1;
            while (distinct > k) distinct -= --cnt[A[i++]] == 0;
            ans += j - i;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};