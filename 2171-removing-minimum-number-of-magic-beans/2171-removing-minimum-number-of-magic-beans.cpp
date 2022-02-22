class Solution {
public:
    long long minimumRemoval(vector<int>& b) {
        long long minimum=0;
        int n=b.size();
            sort(b.begin(),b.end());
        for(int i=0;i<n;i++){
            minimum=max(minimum,(long long)b[i]*(n-i));
        }
        return accumulate(b.begin(),b.end(),0LL)-minimum;
    }
};