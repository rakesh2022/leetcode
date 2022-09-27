class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& p) {
       unordered_map<string, int>mp;
        for(auto &a:p){
            mp[a]++;
        }
         unordered_map<string, int>ref(mp);
        int cnt=mp.size(),k=p[0].size() * p.size();
        int i=0,j=0;
        int n=p[0].size();
        vector<int>res;
        for(int itr=0;itr<p[0].size();itr++){
            i=itr;
            j=itr;
            mp=ref;
            cnt=mp.size();
        while((j + n -1 )< s.size()){
            string temp=s.substr(j,n);
            if(mp.find(temp)!=mp.end()){
                mp[temp]--;
                if(mp[temp]==0){
                    cnt--;
                }
                 
            }
            if(j+n-i == k){
                if(cnt==0)
                    res.push_back(i);
                string start=s.substr(i,n);
                if(mp.find(start)!=mp.end()){
                mp[start]++;
                if(mp[start]==1)
                    cnt++;
                }
                i+=n;
                
            }
            j+=n;
        }
        }
        return res;  
    }
};

