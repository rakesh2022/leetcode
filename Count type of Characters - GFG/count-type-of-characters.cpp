// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            int l=0,u=0,sp=0,num=0;
            vector<int>v;
            for(int i=0;i<s.length();i++){
                if(s[i]>=48 && s[i]<=57)num++;
                else if(s[i]>=65 && s[i]<=90)u++;
                else if(s[i]>=97 && s[i]<=122)l++;
                else sp++;
            }
            v.push_back(u);
            v.push_back(l);
            v.push_back(num);
            v.push_back(sp);
            return v;
            
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal  // } Driver Code Ends