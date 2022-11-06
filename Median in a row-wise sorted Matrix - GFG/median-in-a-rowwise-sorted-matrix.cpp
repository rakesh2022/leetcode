//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &mat, int R, int C){
        vector<int>freq(2001);
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                freq[mat[i][j]]++;
            }
        }
        int mid=(R*C +1)/2;
        for(int i=1;i<2001;i++){
            mid-= freq[i];
            if(mid<=0)return i;
        }
        return 0;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}
// } Driver Code Ends