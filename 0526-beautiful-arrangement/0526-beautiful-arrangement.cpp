class Solution {
public:
    vector<int>t;
    int ans;
    void solve(int pos,int n){
        if(pos>n){
            ans++;
            
            return;
        }
        
        for(int i=1;i<=n;i++){
            if(t[i]==0 && (pos%i == 0 || i%pos == 0)){
                t[i]=1;
                solve(pos+1,n);
                t[i]=0;
            }
        }
    }
    int countArrangement(int n) {
        t.resize(n+1);
        ans=0;
        solve(1,n);
        return ans;
    }
};