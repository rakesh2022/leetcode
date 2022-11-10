//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        unordered_map<string, int>mp;
        for(int i=0;i<n;i++)
        mp[arr[i]]++;
        int freq1=0,freq2=0;
        string tp1="",tp2="";
        for(auto &p:mp){
            if(p.second>freq1){
                freq2=freq1;
                tp2=tp1;
                freq1=p.second;
                tp1=p.first;
            }
            else if(p.second>freq2){
                freq2=p.second;
                tp2=p.first;
            }
        }
        return tp2;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends