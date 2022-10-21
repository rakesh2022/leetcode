class Solution {
public:
    long findsum(int n){
       long sum=0;
        for(;n>0;n/=10){
            sum+=((n%10)*(n%10));
                
            }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int>st;
        st.insert(n);
        while(1){
            int sum=findsum(n);
            if(sum==1)return true;
            if(st.count(sum))return false;
            st.insert(sum);
            n=sum;
        }
        return 1;
    }
};