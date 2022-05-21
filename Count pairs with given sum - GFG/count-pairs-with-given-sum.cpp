// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        int i=0,j=n-1;
        sort(arr,arr+n);
        int ans=0;
        while(i<j){
            int sum=arr[i]+arr[j];
            if(sum >k)j--;
            else if(sum<k)i++;
            else{
                int cnt=0;
                for(int l=i;l<j;l++){
                    if(arr[i]==arr[l])cnt++;
                    else break;
                }
                ans+=cnt;
                j--;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends