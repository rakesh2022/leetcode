class Solution {
public:
    
    int minSteps(int n) {
     // int p[]={}
        vector<int>t(n+1);
        for(int i=2;i<=n;i++){
            t[i]=i;
           for(int j=i-1;j>1;j--){
               if(i%j ==0){
                   t[i]= t[j] + i/j;
                   break;
               }
           }
        }
        return t[n];
    }
};