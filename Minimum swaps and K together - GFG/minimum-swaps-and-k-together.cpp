//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
         int i=0,j=0,swaps=0, ans=INT_MAX,wind=0;
         for(int l=0;l<n;l++){
             if(arr[l]<=k)wind++;
         }
         for(;j<n;j++){
             swaps += arr[j]>k;
             if(j-i+1 <wind)continue;
             if(j-i+1 > wind){
                 swaps-= arr[i++]>k;
             }
             ans= min(swaps, ans);
         }
         return ans;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends