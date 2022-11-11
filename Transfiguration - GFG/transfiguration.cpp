//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    
    public:
    int transfigure (string A, string B)
    {
     int n=A.size();
        if(B.size() != n)return -1;
        unordered_map<char,int>mp;
        for(auto a:A)mp[a]++;
        for(auto a:B){
            if(mp.find(a)==mp.end())return -1;
            mp[a]--;
            if(mp[a]==0)mp.erase(a);
        }
        int res=0,i=n-1,j=n-1;
        while(i>=0){
            if(A[i]==B[j]){
                i--;
                j--;
            }
            else{
                res++;
                i--;
            }
        }
        return res;
    	
    }
};

//{ Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}
// } Driver Code Ends