// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
  public:   
    int countCamelCase (string s)
    {
        int cnt=0;
      for(int i=0;i<s.length();i++){
          if(isupper(s[i]))cnt++;
      }
      return cnt;
    }
};

// { Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout <<ob.countCamelCase (s) << '\n';
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends