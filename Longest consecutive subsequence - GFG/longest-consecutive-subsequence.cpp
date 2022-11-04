//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      set<int>st(arr,arr+n);
      int i=0;
      for(auto it=st.begin();it!=st.end();it++){
          arr[i++]=*it;
      }
      n=i;
      i=0;
      int ans=1,j=1,ok=0;
      for(;j<n;j++){
        //   cout<<arr[j]<<" ";
          ok = (arr[j-1]+1 == arr[j]);
          if(ok==0)i=j;
          ans=max(ans,j-i+1);
      }
      return ans;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends