// { Driver Code Starts
#include <bits/stdc++.h>
#include<string>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string triDownwards(string s) {
        // cout<<s;
        string str="";
        for(int i=0;i<s.length();i++){
            str+=s;
            s[i]='.';
        }
        return str;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin >> S;

        Solution ob;
        string ans=ob.triDownwards(S);
        
        for(int i=0 ; i<ans.length() ; i++)
        {
            cout<<ans[i];
            if((i+1)%S.length()==0)
                cout<<endl;
        }
        
    }
    return 0;
}  // } Driver Code Ends