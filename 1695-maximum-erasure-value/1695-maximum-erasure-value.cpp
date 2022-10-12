class Solution {
public:
    int maximumUniqueSubarray(vector<int>& A) {
      int res=0,cost=0;
        int i=0,j=0,dup=0;
        vector<int>freq(10001,0);
        for(;j<A.size();j++){
            freq[A[j]]++;
            if(freq[A[j]]==2)dup++;
            cost+=A[j];
            while(dup>0){
                dup-= --freq[A[i]]==1;
                cost-=A[i];
                i++;
            }
            res=max(res,cost);
        }
        return res;
    }
};