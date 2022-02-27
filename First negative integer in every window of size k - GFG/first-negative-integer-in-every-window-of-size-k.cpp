// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends



vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
        deque<pair<long long,long long>>dq;
        vector<long long>res;
        for(long long i=N-1;i>N-K;i--){
            dq.push_back({A[i],i});
        }
        for(long long i=N-K;i>=0;i--){
            dq.push_back({A[i],i});
            // if(dq.size()>K)dq.pop_front();
            while(!dq.empty() && dq.back().first>=0)dq.pop_back();
            if(dq.empty())res.push_back(0);
            else
            {
                res.push_back(dq.back().first);
                if(dq.front().second-i+1 >= K)
                dq.pop_front();
            }
        }
        reverse(res.begin(),res.end());
        return res;
 }