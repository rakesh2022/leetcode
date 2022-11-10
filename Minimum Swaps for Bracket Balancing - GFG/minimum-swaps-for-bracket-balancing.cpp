//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
       int close=0,open=0,fault=0,ans=0;
       
            for(int i=0;i<S.length();i++){
                if(S[i]=='['){
                   open++;
                   if(fault>0){
                       ans+=fault;
                       fault--;
                   }
                }
                else{
                  close++;
                  fault=close-open;
                }
                
            }
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
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
} 
// } Driver Code Ends