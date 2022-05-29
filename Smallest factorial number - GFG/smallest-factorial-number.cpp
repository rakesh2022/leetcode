// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    bool possible(int num,int n){
        
        int cnt=0;
        int d=5;
        while(d<=num){
            cnt+=(num/d);
            d*=5;
        }
        if(cnt>=n)return true;
        return false;
    }
    
        int findNum(int n)
        {
            
        int l=0,h=n*5,ans=h;
        while(l<=h){
            int mid=(l+h)/2;
            if(possible(mid,n)){
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
            
        }
        return ans;
        }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends