//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int p[]){
       vector<pair<int,int>>v;
       for(int i=0;i<n;i++){
           v.push_back({p[i],i+1});
       }
       sort(v.begin(),v.end());
       int stocks=0;
       for(int i=0;i<n;i++){
           int per=v[i].first;
           int amt=v[i].second;
           if(per*amt <= k){
               stocks+= (amt);
               k-= (per*amt);
           }
           else{
               stocks+= (k/per);
               k%=per;
           }
       }
       return stocks;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends