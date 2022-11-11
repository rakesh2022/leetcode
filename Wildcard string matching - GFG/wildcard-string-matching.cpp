//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    public:
    // bool backtrack(string wld,string pat){
    //     if(wld.empty() && pat.empty())return 1;
    //     if(wld.empty())return 0;
    //     if(pat.empty()){
    //         int i=0;
    //         while(i<wld.size()){
    //             if(wld[i] != '*'){
    //                 break;
    //             }
    //             i++;
    //         }
    //         return i==wld.size();
    //     }
    //     if(wld[0]==pat[0] || wld[0]=='?')
    //     return backtrack(wld.substr(1),pat.substr(1));
    //     else if(wld[0]=='*'){
    //         return backtrack(wld.substr(1),pat.substr(1)) || backtrack(wld,pat.substr(1)) || backtrack(wld.substr(1),pat);
    //     }
    //     return false;
    // }
    bool match(string wld, string pat)
    {
        vector<vector<int>>t(1001,vector<int>(1001));
        for(int i=0;i<=wld.size();i++){
           for(int j=0;j<=pat.size();j++){
               if(i==0 && j==0)t[i][j]=1;
               else if(j==0){
                   int k=0;
            while(k<i){
                if(wld[k] != '*'){
                    break;
                }
                k++;
            }
           t[i][j]= (k==i);
               }
           }
        }
           for(int i=1;i<=wld.size();i++){
               for(int j=1;j<=pat.size();j++){
                   if(wld[i-1]==pat[j-1] || wld[i-1]=='?')
                        t[i][j]= t[i-1][j-1];
                    else if(wld[i-1]=='*'){
                        t[i][j]= t[i-1][j-1] || t[i][j-1] || t[i-1][j];
        }
               }
           }
        
        // for()
        return t[wld.size()][pat.size()];
       
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