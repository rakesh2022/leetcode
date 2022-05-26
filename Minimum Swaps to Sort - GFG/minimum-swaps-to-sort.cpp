// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&arr)
	{
	    
	    int  n=arr.size();
	   // vector<pair<int,int>>v;
	    
	   // for(int i=0;i<n;i++)
	   // v.push_back({nums[i],i});
	   // sort(v.begin(),v.end());
	   // int vis[n]={};
	   // int ans=0;
	   // for(int i=0;i<n;i++){
	   //     if(vis[i]==1 || nums[i]==v[i].first)
	   //     continue;
	   //     int cycleSize=0;
	   //     int j=i;
	   //     while(vis[j]==0){
	   //         vis[j]=1;
	   //         cycleSize++;
	   //         j=v[j].second;
	   //     }
	   //     if(cycleSize>0)
	   //     ans+=(cycleSize-1);
	        
	   // }
	   int ans=0;
	   map<int,int>mp;
	   for(int i=0;i<n;i++)mp[arr[i]]=i;
	   for(int i=0;i<n;i++){
	       if(mp.begin()->first!=arr[i]){
	           mp[arr[i]]=mp.begin()->second;
	           swap(arr[i],arr[mp.begin()->second]);
	           ans++;
	       }
	       mp.erase(mp.begin());
	   }
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends