class Solution {
public:
    int maxArea(vector<int>& h) {
       int j=h.size()-1;
        int ans=0,pre=0;
        for(int i=0;i<j;i++){
            if(h[i]>pre){
                pre=h[i];
                while(j>i && h[j]<=h[i]){
                    ans= max(ans, (j-i)* min(h[i], h[j]));
                    j--;
                }
                if(j>i){
                    ans= max(ans, (j-i)* min(h[i], h[j]));
                }
            }
        }
        return ans;
        
    }
};