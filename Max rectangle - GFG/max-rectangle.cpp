//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
  vector<int> sel(vector<int>&arr){
      int n=arr.size();
      vector<int>left;
       stack<int>st ;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>=arr[i])st.pop();
        if(st.empty())left.push_back(-1);
        else left.push_back(st.top());
        st.push(i);
    }
    //  for(int i=0;i<n;i++)
    // cout<<left[i]<<" ";
    // cout<<endl;
    return left;
  }
   vector<int> ser(vector<int>&arr){
      int n=arr.size();
          vector<int>right;
       stack<int>st ;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>=arr[i])st.pop();
        if(st.empty())right.push_back(n);
        else right.push_back(st.top());
        st.push(i);
    }
    reverse(right.begin(), right.end());
    // for(int i=0;i<n;i++)
    // cout<<right[i]<<" ";
    // cout<<endl;
    return right;
  }
  
  int MAH(vector<int>&arr){
      vector<int>left=sel(arr),right=ser(arr);
     
      int ans=0;
      for(int i=0;i<arr.size();i++){
        //   cout<<left[i]<<" "<<right[i]<<" "<<arr[i] * (right[i]-left[i]-1)<<endl; 
          ans=max(ans, arr[i] * (right[i]-left[i]-1));
      }
    //   cout<<ans<<" ";
     return ans;
  }
    int maxArea(int M[MAX][MAX], int n, int m) {
        vector<int>arr(m);
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j]==0)arr[j]=0;
                else
                arr[j]++;
            }
            ans= max(MAH(arr), ans);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends