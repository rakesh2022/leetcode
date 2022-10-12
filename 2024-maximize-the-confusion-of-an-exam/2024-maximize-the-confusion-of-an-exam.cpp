class Solution {
public:
    // int solve(string &s, int k,string change){
    //     deque<int>dq;
    //     int sz=0,starti=-1,ans=0;
    //     for(int i=0;i<s.length();i++){
    //        if(s[i]==change[0]){
    //            sz++;
    //        }
    //         else if(s[i]==change[1]){
    //             if(dq.size()==k){
    //                 sz-=(dq.front()-starti);
    //                 starti=dq.front();
    //                 dq.pop_front();
    //             }
    //             sz++;
    //             dq.push_back(i);
    //         }
    //         ans=max(ans,sz);
    //     }
    //     return ans;
    // }
        
    int maxConsecutiveAnswers(string s, int k) {
        
       // return max(solve(s,k), solve(s,k,));
        int i=0,j=0;
        vector<int>freq(26,0);
        for(;j<s.length();j++){
            freq[s[j]-'A']++;
            if((j-i+1)- *max_element(freq.begin(),freq.end()) >k)freq[s[i++]-'A']--;
        }
        return j-i;
    }
};