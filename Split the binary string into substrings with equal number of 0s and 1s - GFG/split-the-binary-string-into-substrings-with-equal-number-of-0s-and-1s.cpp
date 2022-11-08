//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
       int i=0,j=0,sum=0,cnt=0;
       for(;j<str.size();j++){
           sum+= (str[j]=='1')?1:-1;
           if(sum==0){
               cnt++;
           }
        //   cout<<sum<<" "<<cnt<<endl;
       }
       if(sum!=0)return -1;
       return cnt;
        
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