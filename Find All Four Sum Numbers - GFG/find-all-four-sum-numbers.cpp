// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
       set<vector<int>>st;
       vector<vector<int>>res;
       int n=arr.size();
       if(n<4)return res;
       sort(arr.begin(),arr.end());
       for(int i=0;i<n-3;i++){
           for(int j=i+1;j<n-2;j++){
               int start=j+1,end=n-1;
               while(start<end){
                   int sum=arr[i]+arr[j]+arr[start]+arr[end];
                   if(sum<k)start++;
                   else if(sum>k)end--;
                   else{
                       vector<int>v={arr[i],arr[j],arr[start],arr[end]};
                       st.insert(v);
                       start++;
                       
                   }
                   }
           }
       }
       for(auto &it:st){
           res.push_back(it);
       }
       return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends