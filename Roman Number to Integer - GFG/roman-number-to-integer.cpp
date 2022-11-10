//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        unordered_map<char, int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
    int ans=mp[str.back()];
    // reverse(str.begin(), str.end());
    for(int i=str.size()-2;i>=0;i--){
        if(mp[str[i]]<mp[str[i+1]]){
        // ans+=mp[str[i]];
        ans-=mp[str[i]];
        }
        else
        ans+=mp[str[i]];
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends