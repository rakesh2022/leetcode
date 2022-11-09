//{ Driver Code Starts
//Initial template for C++ 
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function template for C++

class Solution{
  public:		
	int lps(string s) {
	    vector<int>lpps((int)s.length());
	    int n=s.length();
	    int ans=0;
	    for(int i=0,j=1;j<s.length();){
	        if(s[i]==s[j]){
	            lpps[j++]=++i;
	        }
	        else{
	            if(i!=0)i=lpps[i-1];
	            else j++;
	        }
	        
	    }
	    return lpps[n-1];
	    
	}
};

//{ Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}

// } Driver Code Ends