//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        unordered_map<char,int>mp;
        for(auto a:p)mp[a]++;
        int dist=mp.size();
        int i=0,j=0,ansLen=INT_MAX;
        string ans;
        for(;j<s.length();j++){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                dist-= (mp[s[j]]==0);
            }
            while(dist==0){
                if(ansLen> (j-i+1)){
                    ans=s.substr(i,j-i+1);
                ansLen= j-i+1;
                }
                // cout<<ansLen<<" ";
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]]==1)
                    dist++;
                }
                i++;
            }
        }
        if(ansLen==INT_MAX)return "-1";
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends