//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends

int countFlip(string s,char ch){
    int cnt=0;
    char cntr= (1-(ch-'0')) + '0';
    for(int i=0;i<s.length();i++){
       if(i%2 == 0){
           if(s[i]!=ch)cnt++;
       }
       else{
           if(s[i]==ch)cnt++;
       }
    }
    return cnt;
}
int minFlips (string S)
{
 
 int sWith0= countFlip(S,'0');
 
 int sWith1= countFlip(S,'1');
//  cout<<sWith0<<" "<<sWith1<<" ";
 return min(sWith0, sWith1);
   
}