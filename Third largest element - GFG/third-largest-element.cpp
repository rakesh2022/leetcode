// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        if(n<3)return -1;
        int x=a[0],y=a[1],z=INT_MIN;
        if(x<y)swap(x,y);
         priority_queue<int,vector<int>,greater<int>>pq;
         for(int i=2;i<n;i++){
            z=max(a[i],z);
            if(z>x){
                int temp=z;
                z=y;
                y=x;
                x=temp;
            }
            else if(z>y)swap(y,z);
         }
         return z;
         
    }

};

// { Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}     // } Driver Code Ends