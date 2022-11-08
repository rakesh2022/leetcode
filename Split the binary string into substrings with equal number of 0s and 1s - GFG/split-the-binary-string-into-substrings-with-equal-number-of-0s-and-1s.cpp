//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        int n=str.size();
        if(n&1)return -1;
        if(n==0)return 0;
        int sum=0;
        for(int i=0;i<str.size();i++){
            sum+= str[i]=='1'?1:-1;
            if(sum==0){
                int nxt= maxSubStr(str.substr(i+1));
                if(nxt== -1)return -1;
                return 1+ nxt;
        }
        }
        return -1;
        
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
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends