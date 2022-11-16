//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    vector<pair<int,int>>train;
    	for(int i=0;i<n;i++)
    	train.push_back({arr[i],dep[i]});
    	sort(train.begin(),train.end());
    // 	vector<pair<int,int>>v;
    int prev=0;
    int cnt=0;
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(train[0].second);
    	for(int i=1;i<n;i++){
    	    
    	    int low=pq.top();
    	   // cout<<low<<" "<<train[i].second<<" "<<endl;
    	    if(low< train[i].first)pq.pop();
    	    pq.push(train[i].second);
    	}
    	return pq.size();
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends