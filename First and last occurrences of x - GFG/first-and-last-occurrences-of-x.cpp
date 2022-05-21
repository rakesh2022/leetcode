// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


int bs(int arr[],int l,int r,int x,string str){
    int ans=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==x){
            ans=mid;
            if(str=="left")
            r=mid-1;
            else
            l=mid+1;
        }
        else if(arr[mid]>x)r=mid-1;
        else l=mid+1;
    }
    return ans;
}

vector<int> find(int arr[], int n , int x )
{
    vector<int>vec;
    vec.push_back(bs(arr,0,n-1,x,"left"));
    vec.push_back(bs(arr,0,n-1,x,"right"));
    return vec;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends