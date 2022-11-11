//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
       int i=0;
       for(int j=1;j<S.length();j++){
           if(S[j]!=S[j-1]){
               S[++i]=S[j];
           }
       }
       return S.substr(0,i+1);
       
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