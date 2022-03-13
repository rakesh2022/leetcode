class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<vector<int>>ans;
        for(int i=0;i<intervals.size();i++){
            pq.push({intervals[i][0],intervals[i][1]});
            
        }
        int a=(pq.top()).first;
        int b=(pq.top()).second;
        pq.pop();
        while(!pq.empty()){
            if((pq.top()).first<=b){
                b=max((pq.top()).second,b);
                pq.pop();
            }
            else{
                // vector<int>temp;
                // temp.push_back(a);
                // temp.push_back(b);
                ans.push_back({a,b});
                a=(pq.top()).first;
                b=(pq.top()).second;
                
                pq.pop();
            }
        }
         // vector<int>temp;
         //        temp.push_back(a);
         //        temp.push_back(b);
                ans.push_back({a,b});
        return ans;
    }
};