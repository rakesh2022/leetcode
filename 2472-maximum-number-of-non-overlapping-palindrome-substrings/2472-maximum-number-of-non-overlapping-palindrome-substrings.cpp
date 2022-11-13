class Solution {
public:
    static bool compare(pair<int,int>&a,pair<int,int>&b){
        return a.second<b.second;
    }
    int maxPalindromes(string s, int k) {
        vector<pair<int,int>>v;
        int n=s.length();
        for(int i=0;i<n;i++){
            for(int l=i,h=i;l>=0 && h<n && s[l]==s[h];l--,h++)
                if(h-l+1>=k)
                    v.push_back({l,h});
             for(int l=i-1,h=i;l>=0 && h<n && s[l]==s[h];l--,h++)
                 if(h-l+1 >=k)
                    v.push_back({l,h});
        }
        int sz=v.size();
        sort(v.begin(),v.end(),compare);
        if(sz==0)return 0;
        int e=v[0].second;
        int rem=0;
        for(int i=1;i<sz;i++){
            if(v[i].first<=e){
                rem++;
            }
            else
                e=v[i].second;
        }
        return sz-rem;
    }
};