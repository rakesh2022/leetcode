// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        vector<int>v;
        k--;
       int i=0;
       while(i+k <n){
           for(int j=i+k;j>=i;j--){
               v.push_back(arr[j]);
           }
           i+=(k+1);
       }
       for(int j=n-1;j>=i;j--){
           v.push_back(arr[j]);
       }
       for(int i=0;i<n;i++)arr[i]=v[i];
        
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends