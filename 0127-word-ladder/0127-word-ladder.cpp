class Solution {
public:
    int ladderLength(string bW, string eW, vector<string>& wL) {
      
        //bfs;
        queue<string>q;
        unordered_set<string>dict(wL.begin(), wL.end());
        q.push(bW);
        if(dict.find(bW)!=dict.end())
                        dict.erase(bW);
        int seqLen=0;
        while(!q.empty()){
             seqLen++;
            int sz=q.size();
            while(sz--){
           string s=q.front();
                q.pop();
                if(s==eW)return seqLen;
                for(int i=0;i<s.length();i++){
                    char org=s[i];
                for(char ch='a';ch<='z';ch++){
                    s[i]=ch;
                    if(dict.find(s)!=dict.end()){
                        dict.erase(s);
                        q.push(s);
                    }
                   
                }
                     s[i]=org;
                }
            }
           
        }
        return 0;
        
        
    }
};