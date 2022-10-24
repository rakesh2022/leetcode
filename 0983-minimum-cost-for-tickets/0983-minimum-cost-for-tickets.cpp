class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
       int i=0, n=days.size();
        vector<int>t(366);
        for(int j=1;j<=365;j++){
            if(i<n && days[i]==j){
                int mn1= max(0,j-7);
                int mn2=max(0, j-30);
            t[j]= min({t[mn1]+ costs[1],t[mn2] + costs[2],t[j-1] + costs[0]}) ; 
                i++;
            }
            else
                t[j]=t[j-1];
            // cout<<j<<" "<<t[j]<<endl;
        }
        return t[days[n-1]];
    }
};