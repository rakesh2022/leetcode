//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
       int low, high, maxLen = 1, start = 0, len = s.size();

    for (int i = 1;i < len;i++) {
        // for even length
        // fixing the point i and i+1.
        low = i - 1;
        high = i;
        while (low >= 0 && high < len && s[low] == s[high]) {
            if (high - low + 1 > maxLen) {
                start = low;
                maxLen = high - low + 1;
            }
            low--;
            high++;
        }

        // for odd length 
        // fixing the point i.
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < len && s[low] == s[high]) {
            if (high - low + 1 > maxLen) {
                start = low;
                maxLen = high - low + 1;
            }
            low--;
            high++;
        }
    }
    return s.substr(start, maxLen);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends