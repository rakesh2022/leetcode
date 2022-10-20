//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    vector<string>res;
    void path(vector<vector<int>>&m, int r,int c,int n, string p){
        if(r==n-1 && c==n-1){
            res.push_back(p);
            return ;
        }
        //D
        m[r][c]=0;
        if(r<n-1 && m[r+1][c]==1){
            path(m,r+1,c,n,p+'D');
        }
        //L
        if(c>0 && m[r][c-1]==1){
            path(m,r,c-1,n,p+'L');
        }
        //R
        if(c<n-1 && m[r][c+1]==1){
            path(m,r,c+1,n,p+'R');
        }
        //U
        if(r>0 && m[r-1][c]==1){
            path(m,r-1,c,n,p+'U');
        }
        m[r][c]=1;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        res.clear();
        if(m[0][0]==0 || m.back().back()==0)return {};
        path(m,0,0,n,"");
        return res;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends