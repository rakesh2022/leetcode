// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        deque<int>q;
        vector<int>res;
        int i=0,j=0;
        while(j<n){
            while(!q.empty() && q.back()<arr[j])q.pop_back();
            q.push_back(arr[j]);
          if(j-i+1 <k)j++;
          else if(j-i+1 ==k){
              res.push_back(q.front());
              if(arr[i]==q.front())q.pop_front();
              i++;j++;
          }
           
        }
        // q.push(3);
        // q.push(4);
        // q.push(5);
        // q.push(6);
        // cout<<q.front()<<"\n";
        // q.pop();
        // cout<<q.front();
        return res;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends