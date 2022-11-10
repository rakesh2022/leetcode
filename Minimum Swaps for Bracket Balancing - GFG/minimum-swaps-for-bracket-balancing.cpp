//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        stack<char>st;
        queue<int>q;
        for(int i=0;i<S.length();i++){
            if(S[i]=='[')q.push(i);
        }
        int cnt=0,ans=0;
            for(int i=0;i<S.length();i++){
                if(S[i]=='['){
                    cnt++;
                    q.pop();
                }
                else{
                   cnt--;
                }
                if(cnt<0){
                    swap(S[i],S[q.front()]);
                    ans+= q.front()-i;
                    q.pop();
                    cnt=1;
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