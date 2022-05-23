// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int>v;
	    int i=0,j=0;
	    while(i<n || j<n){
	        while(i<n && arr[i]<0)i++;
	        while(j<n && arr[j]>=0)j++;
	        if(i<n)v.push_back(arr[i++]);
	        if(j<n)v.push_back(arr[j++]);
	    }
	    for(int i=0;i<n;i++)arr[i]=v[i];
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends