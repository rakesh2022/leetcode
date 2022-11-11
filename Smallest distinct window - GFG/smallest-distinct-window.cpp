//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
      unordered_map<char,int>mp,nmp;
      for(auto &a:str)mp[a]++;
      int i=0,j=0,type=0,ans=INT_MAX;
      for(;j<str.size();j++){
          nmp[str[j]]++;
          type+= (nmp[str[j]]==1);
          while(type==mp.size()){
              ans= min(ans,j-i+1);
              type-= (--nmp[str[i]] ==0);
              i++;
          }
          
      }
      return ans;
           
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends