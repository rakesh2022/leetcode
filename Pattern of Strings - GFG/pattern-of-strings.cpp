// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<string> pattern(string S)
	{
	    vector<string>v;
	    
	    int n=S.length();
	    while(n){
	        string str="";
	        for(int i=0;i<n;i++)str.push_back(S[i]);
	        v.push_back(str);
	        n--;
	    }
	    return v;
	}

};

// { Driver Code Starts.

int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   		Solution ob;

   		vector<string> ans = ob.pattern(s);

   		for(int i = 0; i < ans.size(); i++)
   			cout << ans[i] << "\n";
   		
   	}

    return 0;
}  // } Driver Code Ends