class Solution {
public:
    string reorganizeString(string s) {
        int cnt[26]={};
        string res="";
        for(auto a:s)cnt[a-'a']++;
        priority_queue<pair<int,char>>pq;
        for(int i=0;i<26;i++){
            if(cnt[i]>0){
                pq.push({cnt[i],i+'a'});
            }
        }
    auto block=pq.top();
        pq.pop();
        res.push_back(block.second);
        block.first--;
        while(!pq.empty()){
            auto temp=pq.top();
            pq.pop();
            res.push_back(temp.second);
            temp.first--;
            if(block.first >0){
                pq.push(block);
            }
            block=temp;
        }
        if(block.first >0)return "";
        return res;
        
    }
};