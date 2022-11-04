//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int maxProfit(vector<int>&p){
    int n=p.size();
    vector<int>prof(n);
    int maxPrice=p.back();
    for(int i=n-2;i>=0;i--){
        if(maxPrice < p[i])
            maxPrice=p[i];
    
        prof[i]= max(prof[i+1], maxPrice-p[i]);
    }
    int ans=prof[0], minPrice=p[0];
    for(int i=1;i<n;i++){
        if(minPrice>p[i])
        minPrice=p[i];
        ans= max(ans, p[i] - minPrice + prof[i]);
    }
    return ans;
}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends