//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
        //   vector<int>lps(pat.size()),res;
        //   int i=0,j=1;
        //   while(j<pat.size()){
        //       if(pat[i]==pat[j]){
        //           lps[j++]=++i;
                  
        //       }
        //       else{
        //           if(i!=0)i=lps[i-1];
        //           else
        //           j++;
        //       }
        //   }
           
        //   i=0,j=0;
        //   while(i<txt.size()){
        //       if(txt[i]==pat[j]){
        //           i++;
        //           j++;
        //           if(j==pat.size())
        //           {
        //               res.push_back(i-j+1);
        //               j=lps[j-1];
        //           }
        //       }
        //       else{
        //           if(j!=0)j=lps[j-1];
        //           else
        //           i++;
        //       }
        //   }
        //   if(res.empty())res.push_back(-1);
        //   return res;
        // }
         int pos=0,index=0;
         vector<int>res;
         while((index=txt.find(pat,pos)) != -1){
             res.push_back(index+1);
             pos=index+1;
         }
         return res;
         
         
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends