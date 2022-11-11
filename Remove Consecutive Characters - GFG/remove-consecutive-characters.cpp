//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string distinct(string s){
        if(s.size()<=1)return s;
        if(s[0]==s[1])
        return distinct(s.substr(1));
        return s[0]+ distinct(s.substr(1));
    }
    string removeConsecutiveCharacter(string S)
    {
      return distinct(S);
       
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
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends