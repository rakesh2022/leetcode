// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
       if(n==1)return 1;
       int i=1,j=2;
        while(i<n && a[i]!=a[i-1])i++;
        if(i==n)return n;
       j=i+1;
       while(j<n){
       while(j<n && a[j]==a[j-1])j++;
       if(j<n)a[i++]=a[j++];
       }
       return i;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}  // } Driver Code Ends