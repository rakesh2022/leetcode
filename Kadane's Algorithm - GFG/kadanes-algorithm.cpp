// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
       int i=0,j=0;
       long long sum=0,ans=arr[0];
       while(j<n){
           sum+=arr[j];
           if(sum>=0){
               ans=max(ans,sum);
               j++;
           }
           else {
               while(sum<0){
               ans=max(ans,(long long)arr[i]);
               sum-=arr[i];
               i++;
               }
               j++;
           }
       }
       return ans;
      
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends