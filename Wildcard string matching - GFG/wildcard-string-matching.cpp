//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    public:
    bool backtrack(string wld,string pat){
        if(wld.empty() && pat.empty())return 1;
        if(wld.empty())return 0;
        if(pat.empty()){
            int i=0;
            while(i<wld.size()){
                if(wld[i] != '*'){
                    break;
                }
                i++;
            }
            return i==wld.size();
        }
        if(wld[0]==pat[0] || wld[0]=='?')
        return backtrack(wld.substr(1),pat.substr(1));
        else if(wld[0]=='*'){
            return backtrack(wld.substr(1),pat.substr(1)) || backtrack(wld,pat.substr(1)) || backtrack(wld.substr(1),pat);
        }
        return false;
    }
    bool match(string wild, string pattern)
    {
       return backtrack(wild,pattern);
       
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        if(ob.match(wild, pattern))
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends