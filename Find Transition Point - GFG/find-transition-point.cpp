// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends

int bs(int a[],int l,int r){
    int ans=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==1){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    return ans;
}
int transitionPoint(int arr[], int n) {
    return bs(arr,0,n-1);
}