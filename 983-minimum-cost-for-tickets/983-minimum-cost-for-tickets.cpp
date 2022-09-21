class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& c) {
        int t[366]={};
        int i=0,n=days.size();
        for(int j=1;j<=days.back();j++){
            if(i<n && days[i]==j){
                int mn1=max(0,j-7);
                int mn2=max(0,j-30);
                t[j]= min({t[mn1]+c[1], t[mn2]+c[2],t[j-1]+c[0]});
                i++;
            }
            else
                t[j]=t[j-1];
            cout<<t[j]<<" ";
        }
        return t[days.back()];
    }
};