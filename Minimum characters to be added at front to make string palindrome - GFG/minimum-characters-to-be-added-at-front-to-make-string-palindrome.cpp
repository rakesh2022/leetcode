//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int minChar(string str){
        
        int len=str.length();
        string s=str;
        reverse(s.begin(), s.end());
        str+=("#"+s);
        int n=str.length();
       vector<int>lps(n);
       int i=0,j=1;
       while(j<n){
           if(str[i]==str[j]){
               lps[j++]= ++i;
           }
           else{
               if(i!=0)i=lps[i-1];
               else 
               j++;
           }
       }
       return len-lps.back();
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.minChar(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends