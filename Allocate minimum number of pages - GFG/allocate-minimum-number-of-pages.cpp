// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool possible(int *A,int n,long long x,int m){
        int stu=1;
        long long sum=0;
        // cout<<*(&A+1)-A;
        for(int i=0;i<n;i++){
            if(A[i]>x)return false;
            sum+=A[i];
            
            if(sum>x){
                stu++;
                sum=A[i];
            }
            // cout<<A[i]<<"\/n";
            if(stu>m)return false;
        }
        return true;
    }
    int findPages(int A[], int N, int M) 
    {
        if(M>N)return -1;
       sort(A,A+N);
       long long lo=A[0],hi=accumulate(A,A+N,0ll),ans=-1;
       while(lo<=hi){
           long long mid=(lo+hi)>>1;
           if(possible(A,N,mid,M)){
               ans=mid;
            //   cout<<ans<<"\n";
               hi=mid-1;
           }
           else lo=mid+1;
       }
       return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends