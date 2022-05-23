// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	   int exc_cur=0;
	   int inc_cur=arr[0];
	   for(int i=1;i<n;i++){
	       int tem_exc=max(inc_cur,exc_cur);
	       int tem_inc=exc_cur+arr[i];
	       inc_cur=tem_inc;
	       exc_cur=tem_exc;
	       }
	       return max(inc_cur,exc_cur);
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends