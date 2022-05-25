// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    if(size<2)return false;
    sort(arr,arr+size);
    
    
    int i=0,j=1;
    while(j<size){
        int dif=arr[j]-arr[i];
        if(dif==n)return true;
        else if(dif<n)j++;
        else i++;
        if(i==j)j++;
    }
    return false;
    
}