// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
       sort(a,a+n);
       for(int i=0;i<n;i++){
           if(a[i]<0){
               a[i]=-a[i];
               k--;
           }
           else break;
           if(k==0)break;
       }
     long long mn=*min_element(a,a+n);
     long long sum= accumulate(a,a+n,0ll);
     if(k%2==0)return sum;
     return sum-2*mn;
    }
};

// { Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;
}  // } Driver Code Ends